using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoronaPreFap : Today
{
    [SerializeField] Sprite[] IMGLIST=new Sprite[12];
    public Image Coronaimg;
    public Image CoronaPrefabLogo;
    public Text  CoronaPrefabMainText;
    public Text  CoronaPrefabSubText;
    public Text  CoronaPrefabAreaText;
    public string PrefabID;
    public string DBPrefabID;
    public void SetColor(Color32 col)
    {  
        Coronaimg=GetComponent<Image>();
        Coronaimg.color=col;
    }
    public void SetImg(int index)
    {
        CoronaPrefabLogo.sprite=IMGLIST[index];
    }
}
