using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoronaButton : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] Button Coronabtn;
    [SerializeField] Button Vaccinebtn;

    public void CoronabtnClick(){
        Coronabtn.image.color=new Color(255f/255f,100f/255f,0,255f/255f);
        Vaccinebtn.image.color=new Color(255,255,255,255);
    }
    public void VaccinebtnClick(){
        Vaccinebtn.image.color=new Color(255f/255f,100f/255f,0,255f/255f);
        Coronabtn.image.color=new Color(255,255,255,255);
    }
}
