using System;
using System.Collections;
using System.Collections.Generic;
using _Game.Controller;
using _Game.Scripts;
using Firebase.RemoteConfig;
using OrhonBey.Utility;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


public class HomeCanvasController : CanvasControllerBase
{
    [Space] public static HomeCanvasController Instance;

    [SerializeField] private Button _rewardedCoinButton;
    [SerializeField] private TextMeshProUGUI _rewardedCoinText;

    protected override void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }

        base.Awake();
    }

    private void Start()
    {
        _rewardedCoinButton.onClick.AddListener(AddRewardedCoin);
    }

    public override void Show()
    {
        base.Show();

        // REmote Config üzerinde Datayu  çekiyoruz
        var rewardedCoin = FirebaseRemoteConfig.DefaultInstance.GetValue(RemoteConfigController.RewardedCoinKey)
            .LongValue;
        _rewardedCoinText.text = rewardedCoin.ToString();
    }

    private async void AddRewardedCoin()
    {
        // Wait paneli aç
        var gold = await FirebaseCloudFunctionManager.UserRewardCoinAdd();
        
        if (gold == -1)
        {
            Debug.Log($"Error !");
        }
        else
        {
            Debug.Log($"Gold : {gold}");
        }
    }


    [ContextMenu("First Data Save")]
    public async void Test()
    {
        var language = (int)Application.systemLanguage;
        var data = await FirebaseCloudFunctionManager.UserFirstData(language);
        Debug.Log($"{data.gold}{data.userId}");
    }
}