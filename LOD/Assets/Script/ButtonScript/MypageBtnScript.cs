using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class MypageBtnScript : MonoBehaviour
{
    public GameObject AreaChangePanel;
    public GameObject InfoChangePanel;
    public GameObject TalkPanel;
    public MessageBox messageBox;
    public Text UIDTEXT;
    public Text NICKTEXT;
    public InputField INPUTID;
    public InputField INPUTPW;
    public InputField INPUTPWCH;
    public InputField MainQ;
    public InputField SubQ;
    public InputField Answer;
    public void Show(){
        StartCoroutine(SHOWUIDNICK());
    }
    public IEnumerator SHOWUIDNICK(){
        string userid=GameObject.Find("UserManager").GetComponent<User>().GetUID();
        string serverPath = "https://coco74591.cafe24.com/Getname.php?UID="+userid;
                Debug.Log(serverPath);

        using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) {
                yield return webRequest.SendWebRequest(); 
                
            if (webRequest.isNetworkError || webRequest.isHttpError){
                Debug.Log(webRequest.error);
            }
            else{
                string NICK=webRequest.downloadHandler.text;
                UIDTEXT.text=userid;
                NICKTEXT.text=NICK.Substring(0,NICK.Length-1);
            }              
                   
        }   
    }
    public void AreaChange(string areacmd){
        StartCoroutine(AreaChangeCoru(areacmd));
    }
    public IEnumerator AreaChangeCoru(string area){
        area="Testarea";
        string userid=GameObject.Find("UserManager").GetComponent<User>().GetUID();
        string serverPath = "https://coco74591.cafe24.com/UpdateArea.php?UID="+userid+"&newarea="+area;
        Debug.Log(serverPath);

        using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) {
                yield return webRequest.SendWebRequest(); 
                
            if (webRequest.isNetworkError || webRequest.isHttpError){
                Debug.Log(webRequest.error);
            }
            else{
                Application.Quit();
            }              
                   
        }   
    }
    public void InfoChange(){
        StartCoroutine(InfoChangeCoru1());
    }
    public IEnumerator InfoChangeCoru1(){
            string a;
            string userid=GameObject.Find("UserManager").GetComponent<User>().GetUID();
            string serverPath = "https://coco74591.cafe24.com/Login.php?loginid="+userid;
            Debug.Log(serverPath);

            using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) 
            {
                yield return webRequest.SendWebRequest(); 
                
                 if (webRequest.isNetworkError || webRequest.isHttpError){
                    Debug.Log(webRequest.error);
                    }
                 else{
                    a=webRequest.downloadHandler.text;
                        if(INPUTPW.text.Equals(INPUTPWCH.text) && INPUTID.text.Equals(a.Substring(0,a.Length-1))){
                            StartCoroutine(InfoChangeCoru2(INPUTPW.text));
                        }
                    }              
                
            }
    }
    public IEnumerator InfoChangeCoru2(string PWCMD){
            string userid=GameObject.Find("UserManager").GetComponent<User>().GetUID();
            string serverPath = "https://coco74591.cafe24.com/UpdatePW.php?UID="+userid+"&NEWUPW="+PWCMD;
                Debug.Log(serverPath);

            using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) 
            {
                yield return webRequest.SendWebRequest(); 
                
                 if (webRequest.isNetworkError || webRequest.isHttpError){
                    Debug.Log(webRequest.error);
                    }
                 else{
                    Application.Quit();
                    }                     
            }
    }
    public void Talk(){
            StartCoroutine(TalkCoru());
    }
    public IEnumerator TalkCoru(){
            string userid=GameObject.Find("UserManager").GetComponent<User>().GetUID();
            Debug.Log(userid);
            string serverPath = "https://coco74591.cafe24.com/InsertQuestion.php?Q_ID="+userid+"&Q_TYPE=0&Q_SUBJECT="+MainQ.text+"&Q_CONTENT="+SubQ.text+"&Q_DATE=asd&Q_FILE=NULL";
            Debug.Log(serverPath);
            using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) 
            {
                yield return webRequest.SendWebRequest(); 
                
                 if (webRequest.isNetworkError || webRequest.isHttpError){
                    Debug.Log(webRequest.error);
                    }
                 else{
                     Debug.Log(webRequest.downloadHandler.text);
                     MainQ.text="";
                     SubQ.text="";
                     messageBox.ShowPanel();
                    }                     
            }
    }
    public void LogOut(){
        SceneManager.LoadScene("LoginScene");
    }
    public void ShowAreaChangePanel(){
        AreaChangePanel.SetActive(true);
    }
        public void ShowInfoChangePanel(){
        InfoChangePanel.SetActive(true);
    }
        public void ShowTalkPanel(){
        TalkPanel.SetActive(true);
        StartCoroutine(TalkToDeveloper());
    }
        public IEnumerator TalkToDeveloper(){
            string userid=GameObject.Find("UserManager").GetComponent<User>().GetUID();
            string serverPath = "https://coco74591.cafe24.com/SelectANSWERS.php?UID="+userid;
                Debug.Log(serverPath);

            using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) 
            {
                yield return webRequest.SendWebRequest(); 
                
                 if (webRequest.isNetworkError || webRequest.isHttpError){
                    Debug.Log(webRequest.error);
                    }
                 else{
                     string antext=webRequest.downloadHandler.text;
                     Answer.text=antext;
                    }                     
            }
    }

        public void CloseAreaChangePanel(){
        AreaChangePanel.SetActive(false);
    }
        public void CloseInfoChangePanel(){
        InfoChangePanel.SetActive(false);
    }
        public void CloseTalkPanel(){
        TalkPanel.SetActive(false);
    }
    public void ClickLOGOUTPanel(){
        SceneManager.LoadScene(0);
    }

}
