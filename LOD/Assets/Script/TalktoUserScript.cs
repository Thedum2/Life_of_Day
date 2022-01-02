using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class TalktoUserScript : MonoBehaviour
{
    public InputField QUESField;
    public InputField ANSNUMFIELD;
    public InputField ANSTEXTFIELD;
    void Start()
    {
        StartCoroutine(SHOWQUES());       
    }

    public IEnumerator SHOWQUES(){
        string serverPath = "https://coco74591.cafe24.com/ShowQUES.php";
                Debug.Log(serverPath);

        using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) {
                yield return webRequest.SendWebRequest(); 
                
            if (webRequest.isNetworkError || webRequest.isHttpError){
                Debug.Log(webRequest.error);
            }
            else{
                string QUESCMD=webRequest.downloadHandler.text;
                QUESField.text=QUESCMD;
            }              
                   
        }   
    }

    public void QUES_CLICK(){
        Application.Quit();
    }
    public void ANSWER_CLICK(){
        StartCoroutine(INPUTANS()); 
    }
        public IEnumerator INPUTANS(){
        string serverPath = "https://coco74591.cafe24.com/INPUTANSWER.php?CONTEXT="+ANSTEXTFIELD.text+"&NUM="+ANSNUMFIELD.text;
                Debug.Log(serverPath);

        using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) {
                yield return webRequest.SendWebRequest(); 
                
            if (webRequest.isNetworkError || webRequest.isHttpError){
                Debug.Log(webRequest.error);
            }
            else{
                ANSTEXTFIELD.text="";
                ANSNUMFIELD.text="";
            }              
                   
        }   
    }
}

//ShowQUES.php