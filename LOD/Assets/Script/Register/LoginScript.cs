using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;
using UnityEngine.UI;

public class LoginScript : MonoBehaviour
{   
    public MessageBox msg;
    public User user;
    public InputField IDinput;
    public InputField PWinput;
    string a,b;

public void LoginStart(){
    if(IDinput.text.Equals("admin") && PWinput.text.Equals("admin"))
    SceneManager.LoadScene(2);
    StartCoroutine(Login());
}
    public IEnumerator Login(){
            string serverPath = "https://coco74591.cafe24.com/Login.php?loginid="+IDinput.text;
                Debug.Log(serverPath);

            using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) 
            {
                yield return webRequest.SendWebRequest(); 
                
                 if (webRequest.isNetworkError || webRequest.isHttpError){
                    msg.LoginNO();
                    Debug.Log(webRequest.error);
                    }
                 else{
                    a=webRequest.downloadHandler.text;
                    Gonext();
                    }              
                
            }
    }
    public void Gonext(){
        

        string[] result=a.Split(new char[]{' '});
        
        if(result[0].Equals(PWinput.text)==true){
        Debug.Log("same");

        user.SETUID(IDinput.text);
        user.SetAreaID(result[1]);

        SceneManager.LoadScene("MainScene");
        }
    }
}
