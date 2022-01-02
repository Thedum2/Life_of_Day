using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BithumbData : MonoBehaviour
{
    //코인 이름
   [SerializeField] string Coinname;
    //시가
   [SerializeField] double opening_price;
    //고가
   [SerializeField] double max_price;
    //저가
   [SerializeField] double min_price;
    //종가
   [SerializeField] double closing_price;
    //거래량
   [SerializeField] double units_traded;
    //전일 종가
   [SerializeField] double prev_closing_price;
    //최근 24시간 거래량
   [SerializeField] double units_traded_24H;
    //최근 24시간 거래금액	
   [SerializeField] double acc_trade_value_24H;
     
    public void InputBithumbData(
      string input_Coinname,
      double input_opening_price,
      double input_max_price,
      double input_min_price,
      double input_closing_price,
      double input_units_traded,
      double input_prev_closing_price,
      double input_units_traded_24H,
      double input_acc_trade_value_24H
    ){
        Coinname=input_Coinname;
        opening_price=input_opening_price;
        max_price=input_max_price;
        min_price=input_min_price;
        closing_price=input_closing_price;
        units_traded=input_units_traded;
        prev_closing_price=input_prev_closing_price;
        units_traded_24H=input_units_traded_24H;
        acc_trade_value_24H=input_acc_trade_value_24H;
    }
}
