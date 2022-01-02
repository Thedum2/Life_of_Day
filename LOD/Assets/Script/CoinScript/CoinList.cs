using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinList : MonoBehaviour
{
    ScrollRect CoinScroll;
    public float Space=50f;
    [SerializeField] CoinData CoinD;
    public CoinPreFab CoinPF;
    public List<RectTransform> ConfirmedUIobjects=new List<RectTransform>();
    public List<string> CoinnameKorTextList=new List<string>();
    public List<string> CoinPriceTextList=new List<string>();
    public List<string> CoinnameEngTextList=new List<string>();
   public List<string> CoinUpDownPriceList=new List<string>();
    public List<string> CoinUpDownRateList=new List<string>();
    // Start is called before the first frame update
    public void LoadAllConfirmedDataPrefab(){
        for(int i=0;i<CoinD.GetCoinLength(1);i++){
        CoinPF.CoinnameKorText.text=CoinnameKorTextList[i];
        CoinPF.CoinnameEngText.text=CoinnameEngTextList[i];
        CoinPF.CoinPriceText.text=CoinPriceTextList[i];
        CoinPF.CoinUpDownPrice.text=CoinUpDownPriceList[i];
        CoinPF.CoinUpDownRate.text=CoinUpDownRateList[i];
        CoinPF.PrefabID=i;
        CoinPF.DBPrefabID="COI"+i.ToString();
        
        var newUI=Instantiate(CoinPF,CoinScroll.content).GetComponent<RectTransform>();
        ConfirmedUIobjects.Add(newUI);
        }
        float y=0f;
        for(int i=0;i<ConfirmedUIobjects.Count;i++){
            ConfirmedUIobjects[i].anchoredPosition=new Vector2(0f,-y);
            y+=ConfirmedUIobjects[i].sizeDelta.y+Space;
        }
        CoinScroll.content.sizeDelta=new Vector2(CoinScroll.content.sizeDelta.x,y);
    }
    public void CoinLoad(){
        CoinScroll=GetComponent<ScrollRect>();
        ConfirmedUIobjects.Clear();
        for(int i=0;i<CoinD.GetCoinLength(1);i++){
            CoinnameKorTextList.Add(" ");
            CoinPriceTextList.Add(" ");
            CoinnameEngTextList.Add(" ");
            CoinUpDownPriceList.Add(" ");
            CoinUpDownRateList.Add(" ");
        }
      ADDLIST();
      LoadAllConfirmedDataPrefab();
      //UpdatePrefab();
    }
    void ADDLIST(){
        for(int i=0;i<CoinD.GetCoinLength(1);i++){
            CoinnameKorTextList[i]=(CoinD.ReturnData(i).ReturnData_string(3));
            CoinPriceTextList[i]=((CoinD.ReturnData(i).ReturnDat_double(7)).ToString()+"원");
            CoinnameEngTextList[i]=(CoinD.ReturnData(i).ReturnData_string(2));
            CoinUpDownPriceList[i]=((CoinD.ReturnData(i).ReturnDat_double(9)).ToString()+"원");
            CoinUpDownRateList[i]=(CoinD.ReturnData(i).ReturnDat_double(10).ToString()+"%");
        }     
    }
}
