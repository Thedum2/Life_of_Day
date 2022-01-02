using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ListData : MonoBehaviour
{
    
    [SerializeField] CoronaData CD;
    public CoronaPreFap CPF;
    public List<RectTransform> ConfirmedUIobjects=new List<RectTransform>();
    public List<string> CoronaPrefabLogoList1=new List<string>();
    public List<string> CoronaPrefabMainTextList1=new List<string>();
    public List<string> CoronaPrefabSubTextList1=new List<string>();
    public List<string> CoronaPrefabAreaTextList1=new List<string>();
    public List<string> CoronaPrefabLogoList2=new List<string>();
    public List<string> CoronaPrefabMainTextList2=new List<string>();
    public List<string> CoronaPrefabSubTextList2=new List<string>();
    public List<string> CoronaPrefabAreaTextList2=new List<string>();
    public List<Color32> CoronaPrefabColor1=new List<Color32>();
    public List<int> IMGID=new List<int>();
    [SerializeField] WeatherData WD;
    public WeatherPrefab WPF;
    public string WeatherAreaName;
    public List<string> WeatherAreaname=new List<string>();
    public List<string> Weathernowtemp=new List<string>();
    public List<string> Weatherhightemp=new List<string>();
    public List<string> Weatherlowtemp=new List<string>();
    public List<string> Weatherpop=new List<string>();
    public List<string> Weatherreh=new List<string>();
    public List<string> Weatherwfkor=new List<string>();
    [SerializeField] CoinData CoinD;
    public CoinPreFab CoinPF;
    public List<string> CoinnameKorTextList=new List<string>();
    public List<string> CoinPriceTextList=new List<string>();
    public List<string> CoinnameEngTextList=new List<string>();
   public List<string> CoinUpDownPriceList=new List<string>();
    public List<string> CoinUpDownRateList=new List<string>();
    void Start()
    {
        Invoke("Adddata",0.5f);
    }

    // Update is called once per frame
    void Adddata()
    {
        CoronaPrefabMainTextList1.Add("오늘의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘의 사망자는?");
        CoronaPrefabMainTextList1.Add("오늘 서울의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 부산의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 대구의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 인천의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 광주의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 대전의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 울산의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 세종의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 경기의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 강원의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 충북의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 충남의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 전북의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 전남의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 경북의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 경남의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 제주의 확진자는?");
        CoronaPrefabMainTextList1.Add("오늘 검역의 확진자는?");
        

        CoronaPrefabAreaTextList1.Add("전국");
        CoronaPrefabAreaTextList1.Add("전국");
        CoronaPrefabAreaTextList1.Add("서울");
        CoronaPrefabAreaTextList1.Add("부산");
        CoronaPrefabAreaTextList1.Add("대구");
        CoronaPrefabAreaTextList1.Add("인천");
        CoronaPrefabAreaTextList1.Add("광주");
        CoronaPrefabAreaTextList1.Add("대전");
        CoronaPrefabAreaTextList1.Add("울산");
        CoronaPrefabAreaTextList1.Add("세종");
        CoronaPrefabAreaTextList1.Add("경기");
        CoronaPrefabAreaTextList1.Add("강원");
        CoronaPrefabAreaTextList1.Add("충북");
        CoronaPrefabAreaTextList1.Add("충남");
        CoronaPrefabAreaTextList1.Add("전북");
        CoronaPrefabAreaTextList1.Add("전남");
        CoronaPrefabAreaTextList1.Add("경북");
        CoronaPrefabAreaTextList1.Add("경남");
        CoronaPrefabAreaTextList1.Add("제주");
        CoronaPrefabAreaTextList1.Add("검역");
        
        
        CoronaPrefabSubTextList1.Add((CD.Get_Want_Data_int(6,0)-CD.Get_Want_Data_int(6,1)).ToString()+"명");
        CoronaPrefabSubTextList1.Add((CD.Get_Want_Data_int(5,0)-CD.Get_Want_Data_int(5,1)).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,17).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,16).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,15).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,14).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,13).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,12).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,11).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,10).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,9).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,8).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,7).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,6).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,5).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,4).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,3).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,2).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,1).ToString()+"명");
        CoronaPrefabSubTextList1.Add(CD.Get_Want_Data_int(23,0).ToString()+"명");
    
        
        CoronaPrefabMainTextList2.Add("1차백신은 총 몇명이?");
        CoronaPrefabMainTextList2.Add("2차백신은 총 몇명이?");
        CoronaPrefabMainTextList2.Add("3차백신(추가접종)은 총 몇명이?");
        CoronaPrefabMainTextList2.Add("서울에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("부산에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("대구에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("인천에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("광주에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("대전에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("울산에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("세종에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("경기에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("강원에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("충북에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("충남에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("전북에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("전남에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("경북에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("경남에서는 총 몇명이 접종완료(2차까지)했을까?");
        CoronaPrefabMainTextList2.Add("제주에서는 총 몇명이 접종완료(2차까지)했을까?");
    
    
    
        CoronaPrefabAreaTextList2.Add("전국");
        CoronaPrefabAreaTextList2.Add("전국");
        CoronaPrefabAreaTextList2.Add("전국");
        CoronaPrefabAreaTextList2.Add("서울");
        CoronaPrefabAreaTextList2.Add("부산");
        CoronaPrefabAreaTextList2.Add("대구");
        CoronaPrefabAreaTextList2.Add("인천");
        CoronaPrefabAreaTextList2.Add("광주");
        CoronaPrefabAreaTextList2.Add("대전");
        CoronaPrefabAreaTextList2.Add("울산");
        CoronaPrefabAreaTextList2.Add("세종");
        CoronaPrefabAreaTextList2.Add("경기");
        CoronaPrefabAreaTextList2.Add("강원");
        CoronaPrefabAreaTextList2.Add("충북");
        CoronaPrefabAreaTextList2.Add("충남");
        CoronaPrefabAreaTextList2.Add("전북");
        CoronaPrefabAreaTextList2.Add("전남");
        CoronaPrefabAreaTextList2.Add("경북");
        CoronaPrefabAreaTextList2.Add("경남");
        CoronaPrefabAreaTextList2.Add("제주");


        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(20,0).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(21,0).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(22,0).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,0).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,1).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,2).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,3).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,4).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,5).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,6).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,7).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,8).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,9).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,10).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,11).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,12).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,13).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,14).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,15).ToString()+"명");
        CoronaPrefabSubTextList2.Add(CD.Get_Want_Data_int(24,16).ToString()+"명");


        
        for(int i=0;i<WD.returnweathercount();i++){
        IMGID.Add(returnimgid(WD.returnweather(i).WeatherAreareturn_string(8).ToString()));
        WeatherAreaname.Add(WeatherAreaName+" "+(i*3).ToString()+" 시간 후 날씨");
        Weatherwfkor.Add(WD.returnweather(i).WeatherAreareturn_string(8).ToString());
        Weathernowtemp.Add("현재온도 : "+WD.returnweather(i).WeatherAreareturn_float(3).ToString()+"도");
        Weatherhightemp.Add("최고온도 : "+WD.returnweather(i).WeatherAreareturn_float(4).ToString()+"도");
        Weatherlowtemp.Add("최저온도 : "+WD.returnweather(i).WeatherAreareturn_float(5).ToString()+"도");
        Weatherpop.Add("강수확률 : "+WD.returnweather(i).WeatherAreareturn_float(10).ToString()+"%");
        Weatherreh.Add("습도 : "+WD.returnweather(i).WeatherAreareturn_float(17).ToString()+"%");
        }     
        WeatherAreaName=WD.returnweather(0).WeatherAreareturn_string(0);    


        for(int i=0;i<CoinD.GetCoinLength(1);i++){
            CoinnameKorTextList.Add(" ");
            CoinPriceTextList.Add(" ");
            CoinnameEngTextList.Add(" ");
            CoinUpDownPriceList.Add(" ");
            CoinUpDownRateList.Add(" ");
        }

         for(int i=0;i<CoinD.GetCoinLength(1);i++){
            CoinnameKorTextList[i]=(CoinD.ReturnData(i).ReturnData_string(3));
            CoinPriceTextList[i]=((CoinD.ReturnData(i).ReturnDat_double(7)).ToString()+"원");
            CoinnameEngTextList[i]=(CoinD.ReturnData(i).ReturnData_string(2));
            CoinUpDownPriceList[i]=((CoinD.ReturnData(i).ReturnDat_double(9)).ToString()+"원");
            CoinUpDownRateList[i]=(CoinD.ReturnData(i).ReturnDat_double(10).ToString()+"%");
        }     

    }
    
        public int returnimgid(string cmd){
        if(cmd=="맑음") return 0;
        else if(cmd=="구름 많음") return 1;
        else if(cmd=="흐림") return 2;
        else if(cmd=="비") return 3;
        else if(cmd=="비/눈") return 3;
        else if(cmd=="눈") return 4;
        else if(cmd=="소나기") return 5;

        return 0;
    }
}
