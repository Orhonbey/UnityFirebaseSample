using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Firebase.Functions;
using UnityEngine;

public class FirebaseCloudFunctionManager : MonoBehaviour
{
    private static FirebaseFunctions _firebaseFunctions;
    private void Awake()
    {
        _firebaseFunctions = FirebaseFunctions.DefaultInstance;
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="languageId"></param>
    /// <returns></returns>
    public static async Task<UserData> UserFirstData(int languageId)
    {
        
        var sendData = new Dictionary<string, object>
        {
            { "language", languageId }
        };

        var function = _firebaseFunctions.GetHttpsCallable("userFirstData");
        UserData userData = null;
        await function.CallAsync(sendData).ContinueWith((task) =>
        {
            if (task.IsFaulted)
            {
                foreach (var inner in task.Exception.InnerExceptions)
                {
                    if (inner is FunctionsException)
                    {
                        var e = (FunctionsException)inner;

                        var code = e.ErrorCode;
                        var message = e.Message;
                        Debug.LogError(message + " : " + code);
                    }
                }
            }
            else
            {
                var result = (string)task.Result.Data;
                var resultData = JsonUtility.FromJson<ResultData<UserData>>(result);

                if (resultData.errorMessage != null)
                {
                    userData = resultData.data;
                }
                else
                {
                    Debug.LogError($"{nameof(UserFirstData)} : {resultData.errorMessage}");
                }
            }
        });

        return userData;
    }

    public static async Task<int> UserRewardCoinAdd()
    {
        var function = _firebaseFunctions.GetHttpsCallable("rewardCoinAddUser");
        int gold = -1;
        var sendData = new Dictionary<string, object>();
        await function.CallAsync(sendData).ContinueWith((task) =>
        {
            if (task.IsFaulted)
            {
                foreach (var inner in task.Exception.InnerExceptions)
                {
                    if (inner is FunctionsException)
                    {
                        var e = (FunctionsException)inner;

                        var code = e.ErrorCode;
                        var message = e.Message;
                        Debug.LogError(message + " : " + code);
                    }
                }
            }
            else
            {
                var result = (string)task.Result.Data;
                var resultData = JsonUtility.FromJson<ResultData<int>>(result);

                 if (resultData.errorMessage != null)
                {
                    gold = resultData.data;
                }
                else
                {
                    Debug.LogError($"{nameof(UserFirstData)} : {resultData.errorMessage}");
                }
            }
        });
        return gold;
    }
    
    
    public static async Task<UserData> GetUser()
    {
        var function = _firebaseFunctions.GetHttpsCallable("GetUser");
        UserData userData = null;
        await function.CallAsync().ContinueWith((task) =>
        {
            if (task.IsFaulted)
            {
                foreach (var inner in task.Exception.InnerExceptions)
                {
                    if (inner is FunctionsException)
                    {
                        var e = (FunctionsException)inner;

                        var code = e.ErrorCode;
                        var message = e.Message;
                        Debug.LogError(message + " : " + code);
                    }
                }
            }
            else
            {
                var result = (string)task.Result.Data;
                var resultData = JsonUtility.FromJson<ResultData<UserData>>(result);

                if (resultData.errorMessage != null)
                {
                    userData = resultData.data;
                }
                else
                {
                    Debug.LogError($"{nameof(UserFirstData)} : {resultData.errorMessage}");
                }
            }
        });

        return userData;
    }
    

    [Serializable]
    public class ResultData<T>
    {
        public string errorMessage;
        public T data;
    }
}

[Serializable]
public class UserData
{
    public string userId;
    public int gold;
    public SystemLanguage language;
}