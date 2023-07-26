using System;
using System.Collections;
using System.Collections.Generic;
using _Game.Scripts;
using OrhonBey.Utility;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(CanvasGroup))]
public class AuthenticationCanvasController : CanvasControllerBase
{
   [Space] 
   public static AuthenticationCanvasController Instance;
   
   [SerializeField] private Button _anonymousSingInButton;
   [SerializeField] private Button _googleSingInButton;

   
   
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
      _anonymousSingInButton.onClick.AddListener(SignInAnonymous);
      _googleSingInButton.onClick.AddListener(SignInGoogle);
   }

   private async void SignInAnonymous()
   {
      var signResult = await AuthenticationManager.Instance.SignInAnonymousAsync();

      if (signResult)
      {
        var userData = await FirebaseCloudFunctionManager.UserFirstData((int)Application.systemLanguage);
         Debug.Log($"Sign In Anonymous !"+userData.gold);
         Hide();
         HomeCanvasController.Instance.Show();
      }
      else
      {
         // Bildirim verilecek.
         Debug.Log($"Sign In not success !");
      }
   }
   private async void SignInGoogle()
   {
      var signResult = await AuthenticationManager.Instance.SignInGoogleAsync();

      if (signResult)
      {
         await FirebaseCloudFunctionManager.UserFirstData((int)Application.systemLanguage);
         Debug.Log($"Sign In Google !");
         Hide();
         HomeCanvasController.Instance.Show();
      }
      else
      {
         // Bildirim verilecek.
         Debug.Log($"Sign In not success !");
      }
   }
}
