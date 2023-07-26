using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Networking;


namespace OrhonBey.Utility
{
    public class InternetChecker : MonoBehaviour
    {
        public string pingUrl = "http://www.google.com";
        public int pingTimeOut = 2;

        public IEnumerator IntertnetController(UnityAction<bool> callback = null)
        {
            UnityWebRequest request = new UnityWebRequest(pingUrl);
            request.timeout = pingTimeOut;

            yield return request.SendWebRequest();
            var result = false;
            if (request.error != null)
            {
                Debug.Log("Internet connection error: " + request.error);
                // �nternet ba�lant�s� yok, uygun hata mesaj� g�sterilebilir.
                result = false;
            }
            else
            {
                Debug.Log("Internet connection successful!");
                // �nternet ba�lant�s� mevcut, uygulama ak���na devam edilebilir.
                result = true;
            }
            callback?.Invoke(result);

            yield return result;
        }

        public static async Task<bool> UrlPingConnection(string url, int timeOut)
        {
            UnityWebRequest unityWebRequest = new UnityWebRequest(url);
            unityWebRequest.timeout = timeOut;
            var request = unityWebRequest.SendWebRequest();

            while (!request.isDone)
            {
                await Task.Delay(100);
            }

            if (unityWebRequest.result == UnityWebRequest.Result.ConnectionError ||
                unityWebRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log("Internet connection error: " + unityWebRequest.error);
                return false; // �nternet ba�lant�s� yok
            }
            else
            {
                Debug.Log("Internet connection successful!");
                return true; // �nternet ba�lant�s� mevcut
            }

        }
    }
}

