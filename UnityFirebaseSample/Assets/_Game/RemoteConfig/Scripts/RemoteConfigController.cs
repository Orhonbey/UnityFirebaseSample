using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Firebase.Extensions;
using Firebase.RemoteConfig;
using OrhonBey.Utility;
using UnityEngine;

namespace _Game.Controller
{
    public class RemoteConfigController : Singleton<RemoteConfigController>
    {
        public bool IsInitialized { get; private set; }
        
        private const string _rewardedCoinKey = "rewardedCoin";
        public static string RewardedCoinKey => _rewardedCoinKey;
        public void Init()
        {
            Dictionary<string, object> defaults = new Dictionary<string, object>
            {
                { _rewardedCoinKey, 10 }
            };
            
            FirebaseRemoteConfig.DefaultInstance.SetDefaultsAsync(defaults);
            
            FirebaseManager.Instance.Initialized += OnFirebaseInitialized;
        }

        private void OnFirebaseInitialized()
        {
            //Bütün kurulumları gerçekleştidikten sonra Remote config üzerindeki datalarımızı Fetchliyoruz.
            FetchDataAsync();
        }
        
        Task FetchDataAsync()
        {
#if UNITY_EDITOR
            Debug.Log("Fetching data...");
#endif
            //Fetch yaparken içersine hafızada tutma ve bu sıklıkla güncelleme süresi veriyoruz Örnekte 0 o
            // olarak verdim anlık değişiklikleri yakalaya bilmek için.
            var fetchTask = FirebaseRemoteConfig.DefaultInstance.FetchAsync(
                    TimeSpan.Zero);
            
            return fetchTask.ContinueWithOnMainThread(OnFetchComplete);
        }
        
        /// <summary>
        /// 
        /// </summary>
        /// <param name="fetchTask"></param>
        private void OnFetchComplete(Task fetchTask) {
            
            if (!fetchTask.IsCompleted) {
                Debug.LogError("Retrieval hasn't finished.");
                return;
            }

            var remoteConfig = FirebaseRemoteConfig.DefaultInstance;
            var info = remoteConfig.Info;
            // Fetch işleminde herhangi bir hata alındı ise yazdırıyoruz.
            if(info.LastFetchStatus != LastFetchStatus.Success) {
                Debug.LogError($"{nameof(OnFetchComplete)} was unsuccessful\n{nameof(info.LastFetchStatus)}: {info.LastFetchStatus}");
                return;
            }
            // Fetch successful. Parameter values must be activated to use.
            remoteConfig.ActivateAsync()
                .ContinueWithOnMainThread(
                    task => {
                        Debug.Log($"Remote data loaded and ready for use. Last fetch time {info.FetchTime}.");
                    });
            
            IsInitialized = true;
        }
    }
}