using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WeatherPrefab : MonoBehaviour
{
    [SerializeField] Sprite[] IMGLIST=new Sprite[6];
    Image WeatherPrefabBack;
    public Image WeatherPrefabLogo;
    public Text  WeatherPrefabMainText;
    public Text  WeatherPrefabIMGText;
    public Text  WeatherPrefabnowtempText;
    public Text  WeatherPrefabhightempText;
    public Text  WeatherPrefablowtempText;
    public Text  WeatherPrefabpoptempText;
    public Text  WeatherPrefabrehtempText;
    public string PrefabID;
    public string DBPrefabID;

    public void SetImg(int index)
    {
        WeatherPrefabLogo.sprite=IMGLIST[index];
    }
    public void SetColor(Color32 col)
    {  
        WeatherPrefabBack=GetComponent<Image>();
        WeatherPrefabBack.color=col;
    }
}

