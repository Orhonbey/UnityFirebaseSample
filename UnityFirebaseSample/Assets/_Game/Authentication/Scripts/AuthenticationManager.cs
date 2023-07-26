using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Firebase.Auth;
using Google;
using OrhonBey.Utility;
using UnityEngine;

public class AuthenticationManager : Singleton<AuthenticationManager>
{
    private const string _googleWebClientId =
        "701161701134-29m5i6usog5io93tmr7g7k47buid1k6c.apps.googleusercontent.com";
    public static string GoogleWebClientId => _googleWebClientId;
    public bool IsInitialized { get; private set; }
    public bool IsSignedIn { get; private set; }

    private FirebaseAuth _auth;
    private FirebaseUser _user;

    private GoogleSignInConfiguration _googleSignInConfiguration;

    private void Awake()
    {
        _googleSignInConfiguration = new GoogleSignInConfiguration()
        {
            WebClientId = GoogleWebClientId,
            RequestIdToken = true
        };
    }

    private IEnumerator Start()
    {
        yield return new WaitUntil(() => FirebaseManager.Instance.IsInitialized);
        InitializeFirebase();
    }

    void InitializeFirebase()
    {
        _auth = FirebaseAuth.DefaultInstance;
        _auth.StateChanged += OnAuthStateChanged;
        IsInitialized = true;
    }

    private void OnAuthStateChanged(object sender, EventArgs e)
    {
        if (_auth.CurrentUser != null)
        {
            bool signedIn = _user != _auth.CurrentUser && _auth.CurrentUser != null
                                                       && _auth.CurrentUser.IsValid();
            if (!signedIn && _user != null)
            {
                Debug.Log("Signed out " + _user.UserId);
                IsSignedIn = false;
            }

            _user = _auth.CurrentUser;
            if (signedIn)
            {
                Debug.Log("Signed in " + _user.UserId);
                IsSignedIn = true;
            }
        }
        else
        {
            Debug.Log($"First Login !");
            IsSignedIn = false;
        }
    }

    public async Task<bool> SignInAnonymousAsync()
    {
        bool isResult = false;
        await _auth.SignInAnonymouslyAsync().ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInAnonymouslyAsync was canceled.");
            }
            else if (task.IsFaulted)
            {
                Debug.LogError("SignInAnonymouslyAsync encountered an error: " + task.Exception);
            }
            else
            {
                var newUser = task.Result.User;
                Debug.Log($"User signed in successfully");
                isResult = true;
            }
        });
        return isResult;
    }

    public async Task<bool> SignInGoogleAsync()
    {
        GoogleSignIn.Configuration = _googleSignInConfiguration;
        Task<GoogleSignInUser> googleSignInUser = Task.FromResult(await GoogleSignIn.DefaultInstance.SignIn());
        TaskCompletionSource<FirebaseUser> signInCompleted = new TaskCompletionSource<FirebaseUser>();
        bool result = false;
        var idToken = string.Empty;
        await googleSignInUser.ContinueWith(async task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInGoogleAsync---> was canceled.");
            }
            else if (task.IsFaulted)
            {
                Debug.LogError("SignInGoogleAsync ---> encountered an error: " + task.Exception);
            }
            else
            {
                idToken = (task).Result.IdToken;
            }
        });
        
        if (idToken == string.Empty)
        {
            return result;
        }
        
        Credential credential = GoogleAuthProvider.GetCredential(idToken, null);

        await _auth.SignInWithCredentialAsync(credential).ContinueWith(authTask =>
        {
            if (authTask.IsCanceled)
            {
                signInCompleted.SetCanceled();
            }
            else if (authTask.IsFaulted)
            {
                Debug.LogError("SignInGoogleAsync---> an error: " + authTask.Exception);
            }
            else
            {
                FirebaseUser user = (authTask).Result;
                Debug.Log($"User google signed in successfully");
                result = true;
            }
        });
        return result;
    }

    [ContextMenu("Delete Account")]
    public async void DeleteAccount()
    {
        FirebaseUser user = _auth.CurrentUser;
        if (user != null)
        {
            await user.DeleteAsync().ContinueWith(task =>
            {
                if (task.IsCanceled)
                {
                    Debug.LogError("DeleteAsync was canceled.");
                    return;
                }

                if (task.IsFaulted)
                {
                    Debug.LogError("DeleteAsync encountered an error: " + task.Exception);
                    return;
                }

                HomeCanvasController.Instance.Hide();
                AuthenticationCanvasController.Instance.Show();
                Debug.Log("User deleted successfully.");
            });
        }
    }

    void OnDestroy()
    {
        _auth.StateChanged -= OnAuthStateChanged;
        _auth = null;
    }
}