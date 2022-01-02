using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class UpButtonScript : MonoBehaviour
{
    [SerializeField] GameObject Dashboard_Panel;

    [SerializeField] GameObject Corona_Panel;

    [SerializeField] GameObject Weather_Panel;

    [SerializeField] GameObject Stock_Panel;

    [SerializeField] GameObject Coin_Panel;

    [SerializeField] GameObject Mypage_Panel;
    [SerializeField] CoronaList CL;
    [SerializeField] CoinList COINL;
    [SerializeField] WeatherList WL;
    [SerializeField] DashList DL;
    [SerializeField] MypageBtnScript MBC;
    bool coinc=false;
    
    void Start()
    {
        UpPanelButtonClick_Dashboard_Panel();
    }
    public void UpPanelButtonClick_Dashboard_Panel(){
        Dashboard_Panel.SetActive(true);
        Invoke("DLLoad",0.5f);       
    }
    public void DLLoad(){
        DL.LoadAllConfirmedDataPrefab();
    }
    public void UpPanelButtonClick_Corona_Panel(){
         Corona_Panel.SetActive(true);
        Invoke("CLLoad",0.5f);       
        }
    public void CLLoad(){
        CL.LoadAllConfirmedDataPrefab();
    }
       public void UpPanelButtonClick_Weather_Panel(){
        Weather_Panel.SetActive(true);
        Invoke("WLLoad",0.5f);       
    }
        public void WLLoad(){
        WL.LoadAllConfirmedDataPrefab();
    }
       public void UpPanelButtonClick_Coin_Panel(){
        Coin_Panel.SetActive(true);  
        Invoke("COINLoad",0.5f);    
    }
        public void COINLoad(){
        if(!coinc)
        COINL.CoinLoad();
        coinc=true;
    }
       public void UpPanelButtonClick_Mypage_Panel(){
        Mypage_Panel.SetActive(true);
        Invoke("MypageLoad",0.7f);       
    }
        public void MypageLoad(){
        MBC.Show();
    }
    public void Alldown(){
        Dashboard_Panel.SetActive(false);
        Weather_Panel.SetActive(false);
        Corona_Panel.SetActive(false);
        Stock_Panel.SetActive(false);
        Coin_Panel.SetActive(false);
        Mypage_Panel.SetActive(false);
    }
    public void SHOWPANEL(int index){
        Alldown();
        switch(index){
            case 1:
            Invoke("UpPanelButtonClick_Dashboard_Panel",2f);
            break;
            case 2:
            Invoke("UpPanelButtonClick_Corona_Panel",2f);
            break;
            case 3:
            Invoke("UpPanelButtonClick_Weather_Panel",2f);
            break;
            case 4:
            Invoke("UpPanelButtonClick_Stock_Panel",2f);
            break;
            case 5:
            Invoke("UpPanelButtonClick_Coin_Panel",2f);
            break;
            case 6:
            Invoke("UpPanelButtonClick_Mypage_Panel",2f);
            break;

        }
    }

}
