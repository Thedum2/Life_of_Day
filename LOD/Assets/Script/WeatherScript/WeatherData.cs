using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Xml;

public class WeatherData : MonoBehaviour
{
    int WeatherId;
   [SerializeField] List<WeatherArea> weatherAreas=new List<WeatherArea>();

    public WeatherArea returnweather(int index){
        return weatherAreas[index];
    }
    public int returnweathercount(){
        return weatherAreas.Count;
    }
    public void ADDWeatherList(string cmd){
        XmlDocument AllWeatherXml=new XmlDocument();
        AllWeatherXml.LoadXml(cmd);
        XmlNodeList all_nodes=AllWeatherXml.GetElementsByTagName("rss/channel/item");
        string Area="";    
        foreach(XmlNode node in all_nodes){
            //Area=node.SelectSingleNode("category").InnerText;
        }
        
        AllWeatherXml.LoadXml(cmd);
        all_nodes=AllWeatherXml.GetElementsByTagName("data");
        foreach(XmlNode node in all_nodes){
            WeatherArea WA=this.gameObject.AddComponent<WeatherArea>();
            int inputhour=int.Parse(node.SelectSingleNode("hour").InnerText);
            int inputday=int.Parse(node.SelectSingleNode("day").InnerText);
            float inputtemp=float.Parse(node.SelectSingleNode("temp").InnerText);
            float inputtmx=float.Parse(node.SelectSingleNode("tmx").InnerText);
            float inputtmn=float.Parse(node.SelectSingleNode("tmn").InnerText);
            int inputsky=int.Parse(node.SelectSingleNode("sky").InnerText);
            int inpuypty=int.Parse(node.SelectSingleNode("pty").InnerText);
            string inputwfKor=node.SelectSingleNode("wfKor").InnerText;
            string inputwfEn=node.SelectSingleNode("wfEn").InnerText;
            float inputpop=float.Parse(node.SelectSingleNode("pop").InnerText);
            float inputr12=float.Parse(node.SelectSingleNode("r12").InnerText);
            float inputs12=float.Parse(node.SelectSingleNode("s12").InnerText);
            float inputws=float.Parse(node.SelectSingleNode("ws").InnerText);
            int inputwd=int.Parse(node.SelectSingleNode("wd").InnerText);
            string inputwdKor=node.SelectSingleNode("wdKor").InnerText;
            string inputwdEn=node.SelectSingleNode("wdEn").InnerText;
            float inputreh=float.Parse(node.SelectSingleNode("reh").InnerText);
            float inputr06=float.Parse(node.SelectSingleNode("r06").InnerText);
            float inputs06=float.Parse(node.SelectSingleNode("s06").InnerText);
            
            WA.ADDWeatherData(
                inputhour,
                inputday,
                inputtemp,
                inputtmx,
                inputtmn,
                inputsky,
                inpuypty,
                inputwfKor,
                inputwfEn,
                inputpop,
                inputr12,
                inputs12,
                inputws,
                inputwd,
                inputwdKor,
                inputwdEn,
                inputreh,
                inputr06,
                inputs06
            );
            WA.addareaname(Area);
            weatherAreas.Add(WA);
        }
    }
}
