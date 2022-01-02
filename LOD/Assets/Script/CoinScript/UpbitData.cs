using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpbitData : MonoBehaviour
{
    //EX) BTC-KRW -1
    [SerializeField]string market;
    //영어이름 -2
    [SerializeField]string english_name;
    //한글이름 -3
    [SerializeField]string korean_name;
    //시가 - 4
   [SerializeField] double openingPrice;
    //고가 -5
    [SerializeField]double highPrice;
    //저가 -6
  [SerializeField]  double lowPrice;
    //종가 -7
   [SerializeField] double tradePrice;
    //변화
    /*
    EVEN : 보합
    RISE : 상승
    FALL : 하락
    -8 */ 
    public string change;
    //부호가 있는 변화액 -9
    [SerializeField] double changePrice;
    //부호가 있는 변화율 -10
    [SerializeField]  double changeRate;

    public string ReturnData_string(int dataindex){
        switch(dataindex){
            case 1:
            return market;
            case 2:
            return english_name;
            case 3:
            return korean_name;
            case 8:
            return change;
            default:
            return " ";
        }
    }
      public double ReturnDat_double(int dataindex){
        switch(dataindex){
            case 4:
            return openingPrice;
            case 5:
            return highPrice;
            case 6:
            return lowPrice;
            case 7:
            return tradePrice;
            case 9:
            return changePrice;
            case 10:
            return changeRate;
            default:
            return 0;
        }
    }

    public void UpbitDataAdd1(string input_market,string input_english_name,string input_korean_name){
            market=input_market;
            english_name=input_english_name;
            korean_name=input_korean_name;
    }
    //3개 말고 나머지 넣는 함수
    public void UpbitDataAdd2(
        double inputopeningPrice,
        double inputhighPrice,
        double inputlowPrice,
        double inputtradePrice,
        string inputchange,
        double inputsignedChangePrice,
        double inputsignedChangeRate
    ){
        openingPrice=inputopeningPrice;
        highPrice=inputhighPrice;
        lowPrice=inputlowPrice;
        tradePrice=inputtradePrice;
        change=inputchange;
        changePrice=inputsignedChangePrice;
        changeRate=inputsignedChangeRate;
    }

    public string GetData(){
        return market;
    }
}
