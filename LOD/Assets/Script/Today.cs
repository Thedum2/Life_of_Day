using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Today : MonoBehaviour
{
     [SerializeField] string Today_Year;
     [SerializeField] string Today_Month;
     [SerializeField] string Today_Day;
     [SerializeField] string Today_Hour;
     [SerializeField] string Today_Minute;
     [SerializeField] string Today_Second;
     [SerializeField] string Today_Day_of_the_week;

     [SerializeField] string Last_Week_Year;
     [SerializeField] string Last_Week_Month;
     [SerializeField] string Last_Week_Day;
     [SerializeField] string Last_Week_Hour;
     [SerializeField] string Last_Week_Minute;
     [SerializeField] string Last_Week_Second;
     [SerializeField] string Last_Week_Day_of_the_week;

    void Awake() {
    Set_Days();
    }

    void Set_Days(){
      Today_Year=System.DateTime.Now.ToString("yyyy");
      Today_Month=System.DateTime.Now.ToString("MM");
      Today_Day=System.DateTime.Now.ToString("dd");
      Today_Hour=System.DateTime.Now.ToString("hh");
      Today_Minute=System.DateTime.Now.ToString("mm");
      Today_Second=System.DateTime.Now.ToString("ss");   
      Today_Day_of_the_week=System.DateTime.Now.ToString("dddd");    

      Last_Week_Year=System.DateTime.Now.AddDays(-7).ToString("yyyy");
      Last_Week_Month=System.DateTime.Now.AddDays(-7).ToString("MM");
      Last_Week_Day=System.DateTime.Now.AddDays(-7).ToString("dd");
      Last_Week_Hour=System.DateTime.Now.AddDays(-7).ToString("hh");
      Last_Week_Minute=System.DateTime.Now.AddDays(-7).ToString("mm");
      Last_Week_Second=System.DateTime.Now.AddDays(-7).ToString("ss");   
      Last_Week_Day_of_the_week=System.DateTime.Now.AddDays(-7).ToString("dddd");    
    }
    
    public string Get_ToDay(){
      string cmd;
      cmd=Today_Year+Today_Month+Today_Day;
      return cmd;
    }
      public string Get_Last_Week(){
      string cmd;
      cmd=Last_Week_Year+Last_Week_Month+Last_Week_Day;
      return cmd;
    }

}
