using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class DashList : MonoBehaviour
{
    [SerializeField] List<string> DashDataList=new List<string>();
    public string userid,Loadcmd; 
    ScrollRect DashScroll;
    public float Space=50f;
    public List<RectTransform> ConfirmedUIobjects=new List<RectTransform>();
    [SerializeField] ListData LOD;
    public CoronaPreFap CPF;
    public WeatherPrefab WPF;
    public CoinPreFab CoinPF;
    public void LoadAllConfirmedDataPrefab(){
        StartCoroutine(LoadDash());

        Invoke("DLIST",1f);
    }
    public void DLIST()
    {
        ConfirmedUIobjects.Clear();
        {
        CPF.CoronaPrefabMainText.text="오늘의 점수는 ?";
        CPF.CoronaPrefabAreaText.text="LOD!!";
        CPF.CoronaPrefabSubText.text="88점";
        CPF.SetColor(new Color32(byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),255));
        var newUI=Instantiate(CPF,DashScroll.content).GetComponent<RectTransform>();
        Destroy(newUI.GetComponent<Button>());
        ConfirmedUIobjects.Add(newUI);
        }
        for(int i=0;i<DashDataList.Count;i++){
        if(DashDataList[i].Substring(0,3)=="COC"){
        int cmd=int.Parse(DashDataList[i].Substring(3));
        Debug.Log(cmd);
        CPF.CoronaPrefabMainText.text=LOD.CoronaPrefabMainTextList1[cmd];
        CPF.CoronaPrefabAreaText.text=LOD.CoronaPrefabAreaTextList1[cmd];
        CPF.CoronaPrefabSubText.text=LOD.CoronaPrefabSubTextList1[cmd];
        CPF.SetColor(new Color32(byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),255));
        CPF.SetImg(Random.Range(0,12));
        var newUI=Instantiate(CPF,DashScroll.content).GetComponent<RectTransform>();
        Destroy(newUI.GetComponent<Button>());
        ConfirmedUIobjects.Add(newUI);
        }
        else if(DashDataList[i].Substring(0,3)=="COV"){
        int cmd=int.Parse(DashDataList[i].Substring(3));
        Debug.Log(cmd);
        CPF.CoronaPrefabMainText.text=LOD.CoronaPrefabMainTextList2[cmd];
        CPF.CoronaPrefabAreaText.text=LOD.CoronaPrefabAreaTextList2[cmd];
        CPF.CoronaPrefabSubText.text=LOD.CoronaPrefabSubTextList2[cmd];
        CPF.SetColor(new Color32(byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),255));
        CPF.SetImg(7);
        var newUI=Instantiate(CPF,DashScroll.content).GetComponent<RectTransform>();
        Destroy(newUI.GetComponent<Button>());
        ConfirmedUIobjects.Add(newUI);
        }
        else if(DashDataList[i].Substring(0,3)=="WEA"){
        int cmd=int.Parse(DashDataList[i].Substring(3));
        WPF.SetColor(new Color32(byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),255));
        WPF.WeatherPrefabMainText.text=LOD.WeatherAreaname[cmd];
        WPF.WeatherPrefabIMGText.text=LOD.IMGID[cmd].ToString();
        WPF.WeatherPrefabnowtempText.text=LOD.Weathernowtemp[cmd];
        WPF.WeatherPrefabhightempText.text=LOD.Weatherhightemp[cmd];
        WPF.WeatherPrefablowtempText.text=LOD.Weatherlowtemp[cmd];
        WPF.WeatherPrefabpoptempText.text=LOD.Weatherpop[cmd];
        WPF.WeatherPrefabrehtempText.text=LOD.Weatherreh[cmd];
        WPF.WeatherPrefabIMGText.text=LOD.Weatherwfkor[cmd];
        WPF.SetImg(LOD.IMGID[cmd]);
        var newUI=Instantiate(WPF,DashScroll.content).GetComponent<RectTransform>();
        Destroy(newUI.GetComponent<Button>());
        ConfirmedUIobjects.Add(newUI);
        }
        else if(DashDataList[i].Substring(0,3)=="COI"){
        int cmd=int.Parse(DashDataList[i].Substring(3));
        Debug.Log("코인INDEX : "+cmd);
        CoinPF.CoinnameKorText.text=LOD.CoinnameKorTextList[cmd];
        CoinPF.CoinnameEngText.text=LOD.CoinnameEngTextList[cmd];
        CoinPF.CoinPriceText.text=LOD.CoinPriceTextList[cmd];
        CoinPF.CoinUpDownPrice.text=LOD.CoinUpDownPriceList[cmd];
        CoinPF.CoinUpDownRate.text=LOD.CoinUpDownRateList[cmd];
        CoinPF.PrefabID=cmd;
        var newUI=Instantiate(CoinPF,DashScroll.content).GetComponent<RectTransform>();
        Destroy(newUI.GetComponent<Button>());
        ConfirmedUIobjects.Add(newUI);
            }
        }

        float y=0f;
        for(int i=0;i<ConfirmedUIobjects.Count;i++){
            ConfirmedUIobjects[i].anchoredPosition=new Vector2(0f,-y);
            y+=ConfirmedUIobjects[i].sizeDelta.y+Space;
        }
        DashScroll.content.sizeDelta=new Vector2(DashScroll.content.sizeDelta.x,y); 
    }
    private void Start() {
        DashScroll=GetComponent<ScrollRect>();
        StartCoroutine(LoadDash());
    }
        public IEnumerator LoadDash(){
            userid=GameObject.Find("UserManager").GetComponent<User>().GetUID();
            string serverPath = "https://coco74591.cafe24.com/LoadDASHBOARD.php?UID="+userid;
                Debug.Log(serverPath);

            using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) 
            {
                yield return webRequest.SendWebRequest(); 
                
                 if (webRequest.isNetworkError || webRequest.isHttpError){
                    Debug.Log(webRequest.error);
                    }
                 else{
                    Loadcmd=webRequest.downloadHandler.text;
                    Loadcmd=Loadcmd.Substring(0,Loadcmd.Length-1);
                    string[] result=Loadcmd.Split(new string[] { " " },System.StringSplitOptions.None);
                    DashDataList.Clear();
                    for(int i=0;i<result.Length;i++){
                    DashDataList.Add(result[i]);
                    }              
                   
            }
    }
}
}
