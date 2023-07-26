using Firebase;
using OrhonBey.Utility;
using UnityEngine;

public class FirebaseManager : Singleton<FirebaseManager>
{
    public FirebaseApp FirebaseApp { get; private set; }

    public bool IsInitialized { get; private set; }

    public event System.Action Initialized;

    void Awake()
    {
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {
            var dependencyStatus = task.Result;
            if (dependencyStatus == DependencyStatus.Available)
            {
                FirebaseApp = FirebaseApp.DefaultInstance;
                Initialized?.Invoke();
                IsInitialized = true;
            }
            else
            {
                Debug.LogError($"Could not resolve all Firebase dependencies: {dependencyStatus}");
                // Firebase Unity SDK is not safe to use here.
            }
        });
    }
}