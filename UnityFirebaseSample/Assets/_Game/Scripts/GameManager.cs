using System;
using System.Collections;
using System.Collections.Generic;
using _Game.Controller;
using OrhonBey.Utility;
using UnityEngine;

//Benim yazmış olduğum scriptler arasında herkesten öncelikli olduğu için çalışmasını istiyorum.
[DefaultExecutionOrder(-101)]
public class GameManager : Singleton<GameManager>
{
    private void Awake()
    {
        RemoteConfigController.Instance.Init();
    }

    private IEnumerator Start()
    {
        LoadingCanvasController.Instance.Show();
        // Firebase Initialize olmasını kontrol ediyoruz ve bu duruma göre işlemimizi yapıyoruz.
        yield return new WaitUntil(() => FirebaseManager.Instance.IsInitialized);

        // Daha sonrasında ise RemoteConfig initializenı bekliyoruz.
        yield return new WaitUntil(() => RemoteConfigController.Instance.IsInitialized);

        yield return new WaitUntil(() => AuthenticationManager.Instance.IsInitialized);
        
        if (AuthenticationManager.Instance.IsSignedIn)
        {
            var resultUserData = FirebaseCloudFunctionManager.GetUser();
            while (!resultUserData.IsCompleted)
            {
                yield return null;
            }
            var userData = resultUserData.Result;
            Debug.Log($"userData : gold :  {userData.gold} : id {userData.userId}");
            HomeCanvasController.Instance.Show();
        }
        else
        {
            AuthenticationCanvasController.Instance.Show();
        }
        LoadingCanvasController.Instance.Hide();
    }
}