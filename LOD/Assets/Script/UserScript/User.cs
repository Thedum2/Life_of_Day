using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class User : MonoBehaviour
{
    [SerializeField] string UID;
    [SerializeField] string NICK;
    [SerializeField] string AreaID;
    /// <summary>
    /// Awake is called when the script instance is being loaded.
    /// </summary>
    public string GetUID(){
        return UID;
    }
    public void SETUID(string cmd){
        UID=cmd;
    }
    public string GetNICK(){
        return NICK;
    }
    public void SETNICK(string cmd){
        NICK=cmd;
    }
        public string GetAreaID(){
        return AreaID;
    }
    public void SetAreaID(string cmd){
        AreaID=cmd;
    }
}
