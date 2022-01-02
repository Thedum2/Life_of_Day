using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.IO;
using System.Net;
using LitJson;

public class CoinAPI : MonoBehaviour
{
    [SerializeField] CoinData coinData;
    public Today td;
    List<string> Urlcmd=new List<string>();
    string GetDataUrl ="";
    string PutDataUrl="";
    bool isOnLoading = true;
    
    void Awake(){
    
        StartCoroutine(LoadUpbitList());
        Invoke("CallAPI",0.5f);
        //StartCoroutine(LoadBithumbData());
    }
    void CallAPI(){
        StartCoroutine(LoadUpbitData());
        //Invoke("CallAPI",10f);
    }
    IEnumerator LoadUpbitList(){
        GetDataUrl = "https://api.upbit.com/v1/market/all";
        using ( UnityWebRequest www = UnityWebRequest.Get(GetDataUrl)){
            yield return www.Send();

            if (www.isNetworkError || www.isHttpError){ //불러오기 실패 시
                Debug.Log(www.error);
            }
            else{
                if (www.isDone){
                    isOnLoading = false;
                    PutDataUrl=System.Text.Encoding.UTF8.GetString(www.downloadHandler.data).ToString();
                    nameADD(PutDataUrl);
                    }
                }
            }
            StartCoroutine(LoadUpbitData());
    }

    IEnumerator LoadUpbitData(){
        for(int i=0;i<coinData.upbitGetlength();i++){
        GetDataUrl = "https://crix-api-endpoint.upbit.com/v1/crix/candles/days/?code=CRIX.UPBIT."+coinData.Getmarket(i);
        using (UnityWebRequest www = UnityWebRequest.Get(GetDataUrl)){
            yield return www.Send();
            if (www.isNetworkError || www.isHttpError){ //불러오기 실패 시
                Debug.Log(www.error);
            }
            else{
                if (www.isDone){
                    isOnLoading = false;
                    PutDataUrl=System.Text.Encoding.UTF8.GetString(www.downloadHandler.data).ToString();
                    UpbitADD(i,PutDataUrl);
                    }
                }
            }
        }
    }

    void nameADD(string cmd){
        JsonData Itemdata=JsonMapper.ToObject(cmd);
        int i=0;
        
        while(true){
        try{
            string a=Itemdata[i]["market"].ToString();
            string b=Itemdata[i]["english_name"].ToString();
            string c=Itemdata[i]["korean_name"].ToString();
            if(a.Substring(0,3)=="KRW"){
            coinData.UpbitADDLIST1(a,b,c);         
            }
            i++; 
        }
        catch{
            break;
        }
        }
        
    }
    void UpbitADD(int index,string cmd){
        JsonData Itemdata=JsonMapper.ToObject(cmd);

        double a= double.Parse(Itemdata[0]["openingPrice"].ToString());
        double b= double.Parse(Itemdata[0]["highPrice"].ToString());
        double c= double.Parse(Itemdata[0]["lowPrice"].ToString());
        double d= double.Parse(Itemdata[0]["tradePrice"].ToString());
        string e= Itemdata[0]["change"].ToString();
        double f=double.Parse(Itemdata[0]["changePrice"].ToString());
        double g= double.Parse(Itemdata[0]["changeRate"].ToString());
        coinData.UpbitADDLIST2(index,a,b,c,d,e,f,g);
    }
        void ADDBithumbData(string cmd){
        JsonData Itemdata=JsonMapper.ToObject(cmd);
        Debug.Log(Itemdata["data"]["BTC"]["opening_price"].ToString());

    }
}
