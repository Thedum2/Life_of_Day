using System.Collections;
using System.Collections.Generic;
using System.Xml;
using UnityEngine;
using UnityEngine.UI;

public class CoronaLoadData : MonoBehaviour
{
    public CoronaData LODCoronaData=new CoronaData();
    public void LoadAreaVaccine(string cmd){
        XmlDocument AllVaccineXml=new XmlDocument();
        AllVaccineXml.LoadXml(cmd);
        XmlNodeList all_nodes = AllVaccineXml.SelectNodes("response/body/items/item");
    
        int i=0;
        foreach (XmlNode node in all_nodes)
        {
            LODCoronaData.InputVaccineArea(node.SelectSingleNode("sidoNm").InnerText,i,1);
            LODCoronaData.InputVaccineArea(node.SelectSingleNode("firstCnt").InnerText,i,2);
            LODCoronaData.InputVaccineArea(node.SelectSingleNode("firstTot").InnerText,i,3);
            LODCoronaData.InputVaccineArea(node.SelectSingleNode("secondCnt").InnerText,i,4);
            LODCoronaData.InputVaccineArea(node.SelectSingleNode("secondTot").InnerText,i,5);
            LODCoronaData.InputVaccineArea(node.SelectSingleNode("thirdCnt").InnerText,i,6);
            LODCoronaData.InputVaccineArea(node.SelectSingleNode("thirdTot").InnerText,i,7);  
            ++i;
        }
    }
    public void LoadAllVaccine(string cmd){
        int[,] loadcmd=new int[3,3];
        XmlDocument AllVaccineXml=new XmlDocument();
        AllVaccineXml.LoadXml(cmd);
        XmlNodeList all_nodes = AllVaccineXml.SelectNodes("response/body/items/item");
        int i=0;
        foreach (XmlNode node in all_nodes){
         loadcmd[i,0]=int.Parse(node.SelectSingleNode("firstCnt").InnerText);
         loadcmd[i,1]=int.Parse(node.SelectSingleNode("secondCnt").InnerText);
         loadcmd[i,2]=int.Parse(node.SelectSingleNode("thirdCnt").InnerText);
        i++;
        }
        LODCoronaData.InputVaccineAll(loadcmd[0,0],loadcmd[0,1],loadcmd[0,2],loadcmd[1,0],loadcmd[1,1],loadcmd[1,2],loadcmd[2,0],loadcmd[2,1],loadcmd[2,2]);
    }
    
    public void LoadConfirmedAll(string cmd){
        XmlDocument AllVaccineXml=new XmlDocument();
        AllVaccineXml.LoadXml(cmd);
        XmlNodeList all_nodes = AllVaccineXml.SelectNodes("response/body/items/item");
        foreach(XmlNode node in all_nodes){
        //LODCoronaData.InputConfirmedAll(0,node.SelectSingleNode("accDefRate").InnerText);       
        LODCoronaData.InputConfirmedAll(1,node.SelectSingleNode("accExamCnt").InnerText);
        //LODCoronaData.InputConfirmedAll(2,node.SelectSingleNode("accExamCompCnt").InnerText);       
        //2021-11-26부터 미제공
        //LODCoronaData.InputConfirmedAll(3,node.SelectSingleNode("careCnt").InnerText);
        //2021-11-26부터 미제공
        //LODCoronaData.InputConfirmedAll(4,node.Se lectSingleNode("clearCnt").InnerText);       
        LODCoronaData.InputConfirmedAll(5,node.SelectSingleNode("deathCnt").InnerText);
        LODCoronaData.InputConfirmedAll(6,node.SelectSingleNode("decideCnt").InnerText); 
        //2021-11-26부터 미제공
        //LODCoronaData.InputConfirmedAll(7,node.SelectSingleNode("examCnt").InnerText);       
        //2021-11-26부터 미제공
        //LODCoronaData.InputConfirmedAll(8,node.SelectSingleNode("resutlNegCnt").InnerText);
        LODCoronaData.InputConfirmedAll(9,node.SelectSingleNode("stateDt").InnerText); 
        LODCoronaData.InputConfirmedAll(10,node.SelectSingleNode("stateTime").InnerText);      
        
        }
    }

    public void LoadConfirmedArea(string cmd){
        XmlDocument AllVaccineXml=new XmlDocument();
        AllVaccineXml.LoadXml(cmd);
        XmlNodeList all_nodes = AllVaccineXml.SelectNodes("response/body/items/item");
           int i=0;
        foreach (XmlNode node in all_nodes)
        {
            LODCoronaData.InputConfirmedArea(node.SelectSingleNode("createDt").InnerText,i,0);
            LODCoronaData.InputConfirmedArea(node.SelectSingleNode("deathCnt").InnerText,i,1);
            LODCoronaData.InputConfirmedArea(node.SelectSingleNode("defCnt").InnerText,i,2);
            LODCoronaData.InputConfirmedArea(node.SelectSingleNode("gubun").InnerText,i,3);
            LODCoronaData.InputConfirmedArea(node.SelectSingleNode("incDec").InnerText,i,4);
            LODCoronaData.InputConfirmedArea(node.SelectSingleNode("isolClearCnt").InnerText,i,5);
            //2021-11-26부터 미제공
            //LODCoronaData.InputConfirmedArea(node.SelectSingleNode("isolIngCnt").InnerText,i,6);
            LODCoronaData.InputConfirmedArea(node.SelectSingleNode("localOccCnt").InnerText,i,7);
            LODCoronaData.InputConfirmedArea(node.SelectSingleNode("overFlowCnt").InnerText,i,8);  
            ++i;
        }
    }
}
