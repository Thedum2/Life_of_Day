using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MessageBox : MonoBehaviour
{
    public GameObject MsgPanel;
    public Text MsgText;
    public void RegisterOK(){
        MsgPanel.SetActive(true);
        MsgText.text="회원가입이 완료되었습니다!\n이제 LOD를 즐겨보세요!";
    }    
    public void RegisterNO(){
        MsgPanel.SetActive(true);
        MsgText.text="회원가입이 실패했습니다ㅠㅠ\n뭔가 잘못된 거 아닐까요?";
    }
      public void LoginNO(){
        MsgPanel.SetActive(true);
        MsgText.text="로그인이 실패했습니다ㅠㅠ\n뭔가 잘못된 거 아닐까요?";
    }
    public void ClosePanel(){
        MsgPanel.SetActive(false);
    }    
    public void ShowPanel(){
        MsgPanel.SetActive(true);
    }
}
