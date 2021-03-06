using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WeatherList : MonoBehaviour
{
    // Start is called before the first frame update
    ScrollRect WeatherScroll;
    public float Space=50f;
    [SerializeField] WeatherData WD;
    public WeatherPrefab WPF;
    public List<RectTransform> ConfirmedUIobjects=new List<RectTransform>();
    string WeatherAreaName;
    public List<int> IMGID=new List<int>();
    public List<string> WeatherAreaname=new List<string>();
    public List<string> Weathernowtemp=new List<string>();
    public List<string> Weatherhightemp=new List<string>();
    public List<string> Weatherlowtemp=new List<string>();
    public List<string> Weatherpop=new List<string>();
    public List<string> Weatherreh=new List<string>();
    public List<string> Weatherwfkor=new List<string>();

    void Start() {
        WeatherScroll=GetComponent<ScrollRect>();
        
    }
    public void LoadAllConfirmedDataPrefab(){
        ADDLIST();
        ConfirmedUIobjects.Clear();
        for(int i=0;i<WD.returnweathercount();i++){
        WPF.SetColor(new Color32(byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),255));
        WPF.WeatherPrefabMainText.text=WeatherAreaname[i];
        WPF.WeatherPrefabIMGText.text=IMGID[i].ToString();
        WPF.WeatherPrefabnowtempText.text=Weathernowtemp[i];
        WPF.WeatherPrefabhightempText.text=Weatherhightemp[i];
        WPF.WeatherPrefablowtempText.text=Weatherlowtemp[i];
        WPF.WeatherPrefabpoptempText.text=Weatherpop[i];
        WPF.WeatherPrefabrehtempText.text=Weatherreh[i];
        WPF.WeatherPrefabIMGText.text=Weatherwfkor[i];
        WPF.SetImg(IMGID[i]);
        WPF.DBPrefabID="WEA"+i.ToString();

        var newUI=Instantiate(WPF,WeatherScroll.content).GetComponent<RectTransform>();
        ConfirmedUIobjects.Add(newUI);
        }
        float y=0f;
        for(int i=0;i<ConfirmedUIobjects.Count;i++){
            ConfirmedUIobjects[i].anchoredPosition=new Vector2(0f,-y);
            y+=ConfirmedUIobjects[i].sizeDelta.y+Space;
        }
        WeatherScroll.content.sizeDelta=new Vector2(WeatherScroll.content.sizeDelta.x,y);
    }
    void ADDLIST(){
        for(int i=0;i<WD.returnweathercount();i++){
        IMGID.Add(returnimgid(WD.returnweather(i).WeatherAreareturn_string(8).ToString()));
        WeatherAreaname.Add(WeatherAreaName+" "+(i*3).ToString()+" ?????? ??? ??????");
        Weatherwfkor.Add(WD.returnweather(i).WeatherAreareturn_string(8).ToString());
        Weathernowtemp.Add("???????????? : "+WD.returnweather(i).WeatherAreareturn_float(3).ToString()+"???");
        Weatherhightemp.Add("???????????? : "+WD.returnweather(i).WeatherAreareturn_float(4).ToString()+"???");
        Weatherlowtemp.Add("???????????? : "+WD.returnweather(i).WeatherAreareturn_float(5).ToString()+"???");
        Weatherpop.Add("???????????? : "+WD.returnweather(i).WeatherAreareturn_float(10).ToString()+"%");
        Weatherreh.Add("?????? : "+WD.returnweather(i).WeatherAreareturn_float(17).ToString()+"%");
        }     
        WeatherAreaName=WD.returnweather(0).WeatherAreareturn_string(0);
    }
    public int returnimgid(string cmd){
        if(cmd=="??????") return 0;
        else if(cmd=="?????? ??????") return 1;
        else if(cmd=="??????") return 2;
        else if(cmd=="???") return 3;
        else if(cmd=="???/???") return 3;
        else if(cmd=="???") return 4;
        else if(cmd=="?????????") return 5;

        return 0;
    }
}
