using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoronaConfirmedData : MonoBehaviour
{
    //날짜
   public string createDt;
    //사망자 수
   public int deathCnt;
    //확진자 수
    public int defCnt;
    //지역명
    public string gubun;
    //증감수 - 23
    public int incDec;
    //격리 해제 수
    public int isolClearCnt;
    //격리중 환자 수
    public int isolIngCnt;
    //지역발생 수
    public int localOccCnt;
    //해외유입 수
    public int overFlowCnt;
}
