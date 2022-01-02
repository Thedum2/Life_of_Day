using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RegisterScript : MonoBehaviour
{
    [SerializeField] GameObject RegisterPanel;
    [SerializeField] GameObject LoginPanel;
    public void OpenRegisterPanel(){
        RegisterPanel.SetActive(true);
    }   
    public void CloseRegisterPanel(){
        RegisterPanel.SetActive(false);
    }    
    public void OpenLoginPanelPanel(){
        LoginPanel.SetActive(true);
    }   
    public void CloseLoginPanelPanel(){
        LoginPanel.SetActive(false);
    }
    public void TestNextScene(){
        SceneManager.LoadScene("MainScene");
    }
}
