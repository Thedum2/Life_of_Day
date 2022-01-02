using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class DashBoardAddScript : MonoBehaviour
{   string userid;
    public string DashBoardAddBtnID="";
    public GameObject DashboardAddPanel;
    public DashBoardAddScript DashboardManager;
    public void ShowDashboardAddPanel_CORONA(){
        DashboardAddPanel=GameObject.Find("Canvas").transform.Find("AddDashBoardPanel").gameObject;  
        DashboardManager=GameObject.Find("ButtonManager").GetComponent<DashBoardAddScript>();   
        DashboardManager.DashBoardAddBtnID=this.GetComponent<CoronaPreFap>().DBPrefabID;
        DashboardAddPanel.SetActive(true);
    }
    public void ShowDashboardAddPanel_COIN(){
        DashboardAddPanel=GameObject.Find("Canvas").transform.Find("AddDashBoardPanel").gameObject;   
        DashboardManager=GameObject.Find("ButtonManager").GetComponent<DashBoardAddScript>();   
        DashboardManager.DashBoardAddBtnID=this.GetComponent<CoinPreFab>().DBPrefabID;
        DashboardAddPanel.SetActive(true);
    }
    public void ShowDashboardAddPanel_WEATHER(){
        DashboardAddPanel=GameObject.Find("Canvas").transform.Find("AddDashBoardPanel").gameObject;   
        DashboardManager=GameObject.Find("ButtonManager").GetComponent<DashBoardAddScript>();   
        DashboardManager.DashBoardAddBtnID=this.GetComponent<WeatherPrefab>().DBPrefabID;
        DashboardAddPanel.SetActive(true);
    }
    public void CloseDashboardAddPanel(){
        DashboardAddPanel=GameObject.Find("Canvas").transform.Find("AddDashBoardPanel").gameObject;
        DashboardAddPanel.SetActive(false);
    }
    public void ADDDashboardAddPanel(){       

        DashboardAddPanel=GameObject.Find("Canvas").transform.Find("AddDashBoardPanel").gameObject;
        userid=GameObject.Find("UserManager").GetComponent<User>().GetUID(); 
        StartCoroutine(UpdateDash());
    }

     public IEnumerator UpdateDash(){
            string serverPath = "https://coco74591.cafe24.com/DASHBOARDUpdate.php?UID="+userid+"&USASH="+DashBoardAddBtnID;
                Debug.Log(serverPath);

            using (UnityWebRequest webRequest = UnityWebRequest.Get(serverPath)) 
            {
                yield return webRequest.SendWebRequest(); 
                
                 if (webRequest.isNetworkError || webRequest.isHttpError){
                    Debug.Log(webRequest.error);
                    }
                 else{
                    DashboardAddPanel.SetActive(false);
                    }              
                
            }
    }
}
