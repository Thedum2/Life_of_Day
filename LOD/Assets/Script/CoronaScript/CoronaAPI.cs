using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class CoronaAPI : MonoBehaviour
{
    public Today td;
    public CoronaLoadData CLD;
    List<string> Urlcmd=new List<string>();
    string GetDataUrl ="";
    string PutDataUrl="";
    bool isOnLoading = true;
    string EncodingKey;
    string Today_Date,Last_Week_Date;

    void Start()
    {
        EncodingKey="pB%2FmhojJjzPKguuRknN4aW6QkI27E%2F%2FGBtZ6HhxQ%2ByXVbn5gM0iu3H%2BX%2BXugr6BEInufC7W6nqp3zqb7TjrfEg%3D%3D";
        Today_Date=td.Get_ToDay();
        Last_Week_Date=td.Get_Last_Week();

         ADDURL();
         StartCoroutine(AllVaccineLoadData());
         StartCoroutine(AreaVaccineLoadData());
         StartCoroutine(AllCoronaLoadData());
         StartCoroutine(AreaCoronaLoadData());
    }

    IEnumerator AllVaccineLoadData(){
        GetDataUrl = Urlcmd[0];
        using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl)){
            yield return www.Send();

            if (www.isNetworkError || www.isHttpError){ //불러오기 실패 시
                Debug.Log(www.error);
            }
            else{
                if (www.isDone){
                    isOnLoading = false;
                    PutDataUrl=System.Text.Encoding.UTF8.GetString(www.downloadHandler.data).ToString();
                    Debug.Log(PutDataUrl);
                    CLD.LoadAllVaccine(PutDataUrl);
                    }
                }
            }
    }
    IEnumerator AreaVaccineLoadData(){
        GetDataUrl = Urlcmd[1];
        using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl)){
            yield return www.Send();

            if (www.isNetworkError || www.isHttpError){ //불러오기 실패 시
                Debug.Log(www.error);
            }
            else{
                if (www.isDone){
                    isOnLoading = false;
                    PutDataUrl=System.Text.Encoding.UTF8.GetString(www.downloadHandler.data).ToString();
                    Debug.Log(PutDataUrl);
                    CLD.LoadAreaVaccine(PutDataUrl);
                    }
                }
            }
    }    
    IEnumerator AllCoronaLoadData(){
        GetDataUrl = Urlcmd[2];
        using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl)){
            yield return www.Send();

            if (www.isNetworkError || www.isHttpError){ //불러오기 실패 시
                Debug.Log(www.error);
            }
            else{
                if (www.isDone){
                    isOnLoading = false;
                    PutDataUrl=System.Text.Encoding.UTF8.GetString(www.downloadHandler.data).ToString();
                    CLD.LoadConfirmedAll(PutDataUrl);
                    }
                }
            }
    }
    IEnumerator AreaCoronaLoadData(){
        GetDataUrl = Urlcmd[3];
        using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl)){
            yield return www.Send();

            if (www.isNetworkError || www.isHttpError){ //불러오기 실패 시
                Debug.Log(www.error);
            }
            else{
                if (www.isDone){
                    isOnLoading = false;
                    PutDataUrl=System.Text.Encoding.UTF8.GetString(www.downloadHandler.data).ToString();
                    Debug.Log(PutDataUrl);
                    CLD.LoadConfirmedArea(PutDataUrl);
                    }
                }
            }
    }

    void ADDURL(){
        Urlcmd.Add("https://nip.kdca.go.kr/irgd/cov19stats.do?list=all");
        Urlcmd.Add("https://nip.kdca.go.kr/irgd/cov19stats.do?list=sido");
        Urlcmd.Add("http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19InfStateJson?serviceKey="+EncodingKey+"&pageNo=1&numOfRows=10&startCreateDt="+Last_Week_Date+"&endCreateDt="+Today_Date);
        Urlcmd.Add("http://openapi.data.go.kr/openapi/service/rest/Covid19/getCovid19SidoInfStateJson?serviceKey="+EncodingKey+"&pageNo=1&numOfRows=10&startCreateDt="+Last_Week_Date+"&endCreateDt="+Today_Date);
    }

}
