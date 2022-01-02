using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class WeatherAPI : MonoBehaviour
{
    public Today td;
    public WeatherData WD;
    string GetDataUrl ="";
    string PutDataUrl="";
    bool isOnLoading = true;

    void Start(){
        string userarea=GameObject.Find("UserManager").GetComponent<User>().GetAreaID();
        CallWeatherAPI("userarea");
    }
    void CallWeatherAPI(string cmd){
        StartCoroutine(AreaWeatherLoadData(cmd));
    }
   IEnumerator AreaWeatherLoadData(string apicmd){
        GetDataUrl = "https://www.kma.go.kr/wid/queryDFSRSS.jsp?zone="+apicmd;
        using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl)){
            yield return www.Send();

            if (www.isNetworkError || www.isHttpError){ //불러오기 실패 시
                Debug.Log(www.error);
            }
            else{
                if (www.isDone){
                    isOnLoading = false;
                    PutDataUrl=System.Text.Encoding.UTF8.GetString(www.downloadHandler.data).ToString();
                    WD.ADDWeatherList(PutDataUrl);
                    }
                }
            }
    }    
}
