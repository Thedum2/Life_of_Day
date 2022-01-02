using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinData :MonoBehaviour
{
     //업비트데이터
    [SerializeField] List<UpbitData> upbitDatas=new List<UpbitData>();
    //빗썸 데이터
    [SerializeField]List<BithumbData> bithumbDatas=new List<BithumbData>();
    public int GetCoinLength(int cmd){
        if(cmd==1)
        return upbitDatas.Count;
        else
        return bithumbDatas.Count;
    }
    public UpbitData ReturnData(int dataindex){
        return upbitDatas[dataindex];
    }
    public string Reuturnchange(int cmd){
        return upbitDatas[cmd].change;
    }
  public void BithumbADDLIST(
      string cmd_Coinname,
      double cmd_opening_price,
      double cmd_max_price,
      double cmd_min_price,
      double cmd_closing_price,
      double cmd_units_traded,
      double cmd_prev_closing_price,
      double cmd_units_traded_24H,
      double cmd_acc_trade_value_24H
      ){
      BithumbData BD=this.gameObject.AddComponent<BithumbData>();
      BD.InputBithumbData(
          cmd_Coinname,
       cmd_opening_price,
       cmd_max_price,
       cmd_min_price,
       cmd_closing_price,
       cmd_units_traded,
       cmd_prev_closing_price,
       cmd_units_traded_24H,
       cmd_acc_trade_value_24H
          );
        bithumbDatas.Add(BD);
    }
    public void UpbitADDLIST1(string cmd_market,string cmd_korean_name,string cmd_english_name){
      
       UpbitData UD=this.gameObject.AddComponent<UpbitData>(); 
       UD.UpbitDataAdd1(cmd_market,cmd_korean_name,cmd_english_name);
        upbitDatas.Add(UD);
    }
    public void UpbitADDLIST2( 
        int inputindex,
        double inputopeningPrice,
        double inputhighPrice,
        double inputlowPrice,
        double inputtradePrice,
        string inputchange,
        double inputsignedChangePrice,
        double inputsignedChangeRate
        ){
        upbitDatas[inputindex].UpbitDataAdd2(
            inputopeningPrice,
            inputhighPrice,
            inputlowPrice,
            inputtradePrice,
            inputchange,
            inputsignedChangePrice,
            inputsignedChangeRate
            );
    }
    public int upbitGetlength(){
        return upbitDatas.Count;
    }
    public string Getmarket(int cmd){
        return upbitDatas[cmd].GetData();
    }
}

