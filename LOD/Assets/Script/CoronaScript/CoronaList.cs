using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
/*
코로나 발생 현황
1.오늘의 확진자는? (전국)
2.오늘의 사망자는? (전국)
3.오늘의 검사자는? (전국)
4.오늘의 격리 해제 수는? (전국)
5.오늘의 확진률은? (전국)
6.오늘의 코로나 정보 (서울)
7.오늘의 코로나 정보 (경기)
8.오늘의 코로나 정보 (인천)
9.오늘의 코로나 정보 (충남)
10.오늘의 코로나 정보 (경남)
11.오늘의 코로나 정보 (전북)
12.오늘의 코로나 정보 (강원)
13.오늘의 코로나 정보 (대구)
14.오늘의 코로나 정보 (전남)
15.오늘의 코로나 정보 (대전)
16.오늘의 코로나 정보 (광주)
17.오늘의 코로나 정보 (충북)
18.오늘의 코로나 정보 (경북)
19.오늘의 코로나 정보 (제주)
20.오늘의 코로나 정보 (울산)
21.오늘의 코로나 정보 (세종)
22.오늘의 코로나 정보 (부산)

코로나 예방접종 현황
1.오늘의 1차 예방 접종 누적
2.오늘의 2차 예방 접종 누적
3.오늘의 3차 예방 접종 누적
4.오늘의 코로나 예방 접종 정보 (서울)
5.오늘의 코로나 예방 접종 정보 (경기)
6.오늘의 코로나 예방 접종 정보 (인천)
7.오늘의 코로나 예방 접종 정보 (충남)
8.오늘의 코로나 예방 접종 정보 (경남)
9.오늘의 코로나 예방 접종 정보 (전북)
10.오늘의 코로나 예방 접종 정보 (강원)
11.오늘의 코로나 예방 접종 정보 (대구)
12.오늘의 코로나 예방 접종 정보 (전남)
13.오늘의 코로나 예방 접종 정보 (대전)
14.오늘의 코로나 예방 접종 정보 (광주)
15.오늘의 코로나 예방 접종 정보 (충북)
16.오늘의 코로나 예방 접종 정보 (경북)
17.오늘의 코로나  예방 접종정보 (제주)
18.오늘의 코로나 예방 접종 정보 (울산)
19.오늘의 코로나 예방 접종 정보 (세종)
20.오늘의 코로나 예방 접종 정보 (부산)
*/

public class CoronaList : MonoBehaviour
{
    // Start is called before the first frame update
    ScrollRect CoronaScroll;
    public float Space=50f;
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
    void Start()
    {
        CoronaScroll=GetComponent<ScrollRect>();
        AddData();
    } 
      public void LoadAllVaccineDataPrefab(){
        ConfirmedUIobjects.Clear();
        for(int i=0;i<CoronaPrefabMainTextList2.Count;i++){
        CPF.CoronaPrefabMainText.text=CoronaPrefabMainTextList2[i];
        CPF.CoronaPrefabAreaText.text=CoronaPrefabAreaTextList2[i];
        CPF.CoronaPrefabSubText.text=CoronaPrefabSubTextList2[i];
        CPF.SetColor(new Color32(byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),255));
        CPF.SetImg(7);
        CPF.DBPrefabID="COV"+i.ToString();
        
        var newUI=Instantiate(CPF,CoronaScroll.content).GetComponent<RectTransform>();
        ConfirmedUIobjects.Add(newUI);
        }
        float y=0f;
        for(int i=0;i<ConfirmedUIobjects.Count;i++){
            ConfirmedUIobjects[i].anchoredPosition=new Vector2(0f,-y);
            y+=ConfirmedUIobjects[i].sizeDelta.y+Space;
        }
        CoronaScroll.content.sizeDelta=new Vector2(CoronaScroll.content.sizeDelta.x,y);
        
    }
    public void LoadAllConfirmedDataPrefab(){
        ConfirmedUIobjects.Clear();
        for(int i=0;i<CoronaPrefabMainTextList1.Count;i++){
        CPF.CoronaPrefabMainText.text=CoronaPrefabMainTextList1[i];
        CPF.CoronaPrefabAreaText.text=CoronaPrefabAreaTextList1[i];
        CPF.CoronaPrefabSubText.text=CoronaPrefabSubTextList1[i];
        CPF.SetColor(new Color32(byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),byte.Parse(Random.Range(150,256).ToString()),255));
        CPF.SetImg(Random.Range(0,12));
        CPF.DBPrefabID="COC"+i.ToString();
        var newUI=Instantiate(CPF,CoronaScroll.content).GetComponent<RectTransform>();
        ConfirmedUIobjects.Add(newUI);
        }
        float y=0f;
        for(int i=0;i<ConfirmedUIobjects.Count;i++){
            ConfirmedUIobjects[i].anchoredPosition=new Vector2(0f,-y);
            y+=ConfirmedUIobjects[i].sizeDelta.y+Space;
        }
        CoronaScroll.content.sizeDelta=new Vector2(CoronaScroll.content.sizeDelta.x,y); 
    }
        void AddData(){
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

    }
}