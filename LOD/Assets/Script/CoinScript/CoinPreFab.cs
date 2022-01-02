using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinPreFab : MonoBehaviour
{
    CoinData coind;
    public Image CoronaPrefabLogo;
    public Text  CoinnameKorText;
    public Text  CoinnameEngText;
    public Text  CoinPriceText;
    public Text  CoinUpDownRate;
    public Text  CoinUpDownPrice;
    public int PrefabID;
    public string DBPrefabID;
    string plusminus="";

    void Start()
    {
        coind=GameObject.Find("UpbitData").GetComponent<CoinData>();
        Invoke("UpdatePrefab",1f);
    }
    void UpdatePrefab(){
            CoinnameKorText.text=(coind.ReturnData(PrefabID).ReturnData_string(3));
            if(coind.Reuturnchange(PrefabID)=="RISE"){
            plusminus="+";
            CoinUpDownPrice.color=Color.red;
            CoinUpDownRate.color=Color.red;
            CoinPriceText.color=Color.red;
            } 
            else if(coind.Reuturnchange(PrefabID)=="FALL") {
                plusminus="-";
            CoinUpDownPrice.color=Color.blue;
            CoinUpDownRate.color=Color.blue;
            CoinPriceText.color=Color.blue;
                }
            else if(coind.Reuturnchange(PrefabID)=="EVEN") {
            plusminus="";
            CoinUpDownPrice.color=Color.white;
            CoinUpDownRate.color=Color.white;
            CoinPriceText.color=Color.white;
            }
            try{
            CoinPriceText.text=((coind.ReturnData(PrefabID).ReturnDat_double(7)).ToString()+"원");
            CoinnameEngText.text=(coind.ReturnData(PrefabID).ReturnData_string(2));
            CoinUpDownPrice.text=(plusminus+(coind.ReturnData(PrefabID).ReturnDat_double(9)).ToString()+"원");
            CoinUpDownRate.text=("전일대비 : "+plusminus+(coind.ReturnData(PrefabID).ReturnDat_double(10)).ToString().Substring(0,4)+"%");
            }
            catch{

            }
        Invoke("UpdatePrefab",10f);
    }
}
