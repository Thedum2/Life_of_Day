using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CoronaData : MonoBehaviour
{
   //누적 확진률 - 0
   [SerializeField] List<double> ACC_DEF_RATE=new List<double>();
   //누적 검사 수 - 1
   [SerializeField] List<int> ACC_EXAM_CNT=new List<int>();
   //누적 검사 완료 수 - 2
   [SerializeField] List<int> ACC_EXAM_COMP_CNT=new List<int>();
   //치료중 환자 수 - 3 //2021-11-26부터 미제공
   [SerializeField] List<int> CARE_CNT=new List<int>();
   //격리해제 수 - 4 //2021-11-26부터 미제공
   [SerializeField] List<int> CLEAR_CNT=new List<int>();
   //사망자 수 - 5
   [SerializeField] List<int> DEATH_CNT=new List<int>();
   //확진자 수 - 6
   [SerializeField] List<int> DECIDE_CNT=new List<int>();
   //검사진행 수 - 7 //2021-11-26부터 미제공
   [SerializeField] List<int> EXAM_CNT=new List<int>();
   //결과 음성 수 - 8  //2021-11-26부터 미제공
   [SerializeField] List<int> RESUTL_NEG_CNT=new List<int>();
    //기준일 - 9
   [SerializeField] List<string> STATE_DT=new List<string>();
   //기준 시간 - 10
   [SerializeField] List<string> STATE_TIME=new List<string>();
   //당일실적 - 11
    [SerializeField]string AllVaccine_Today;
    //당일실적1,2,3차 - 12,13,14
    [SerializeField]int Today_firstCnt,Today_secondCnt,Today_thirdCnt;
    //전일누적 - 15
    [SerializeField]string AllVaccine_Yesterday;
    //전일누적1,2,3차 - 16,17,18
    [SerializeField]int Yesterday_firstCnt,Yesterday_secondCnt,Yesterday_thirdCnt;
    //전체건수 - 19
    [SerializeField]string AllVaccine_All;
    //전체건수1,2,3차 - 20,21,22 
    [SerializeField]int All_firstCnt,All_secondCnt,All_thirdCnt;
   //지역별 확진자 발생 정보
   [SerializeField] CoronaConfirmedData[] AllConfirmed=new CoronaConfirmedData[19];
    //시,도별 백신 접종 정보
    [SerializeField] CoronaVaccineData[] AreaVaccine=new CoronaVaccineData[17];
    /*
    0 :서울특별시
    1 :부산광역시
    2 :대구광역시
    3 :인천광역시
    4 :광주광역시
    5 :대전광역시
    6 :울산광역시
    7 :세종특별자치시
    8 :경기도
    9 :강원도
    10 :충청북도
    11 :충청남도
    12 :전라북도
    13 :전라남도
    14 :경상북도
    15 :경상남도
    16 :제주특별자치도
    */
    
    public double Get_Want_Data_double(int Wantindex,int Dataindex){
        switch(Wantindex){
            case 1:
            return ACC_DEF_RATE[Dataindex];
            default :
            return 0;
        }
    }
    public int Get_Want_Data_int(int Wantindex,int Dataindex){
        switch(Wantindex){
            case 1:
            return ACC_EXAM_CNT[Dataindex];
            case 2:
            return ACC_EXAM_COMP_CNT[Dataindex];
            case 3:
            return CARE_CNT[Dataindex];
            case 4:
            return CLEAR_CNT[Dataindex];
            case 5:
            return DEATH_CNT[Dataindex];
            case 6:
            return DECIDE_CNT[Dataindex];
            case 7:
            return EXAM_CNT[Dataindex];
            case 8:
            return RESUTL_NEG_CNT[Dataindex];
            case 12:
            return Today_firstCnt;
            case 13:
            return Today_secondCnt;
            case 14:
            return Today_thirdCnt;
            case 16:
            return Yesterday_firstCnt;
            case 17:
            return Yesterday_secondCnt;
            case 18:
            return Yesterday_thirdCnt;
            case 20:
            return All_firstCnt;
            case 21:
            return All_secondCnt;
            case 22:
            return All_thirdCnt;
            case 23:
            return AllConfirmed[Dataindex].incDec;
            case 24:
            return AreaVaccine[Dataindex].secondTot;
            default:
            return 0;
        }
    }

    public void InputVaccineArea(string cmd,int arrayindex,int xmlindex){       
        switch(xmlindex){

            case 1:
            AreaVaccine[arrayindex].sidoNm=cmd;
            break;
            case 2:
            AreaVaccine[arrayindex].firstCnt=int.Parse(cmd);
            break;
            case 3:
            AreaVaccine[arrayindex].firstTot=int.Parse(cmd);
            break;
            case 4:
            AreaVaccine[arrayindex].secondCnt=int.Parse(cmd);
            break;
            case 5:
            AreaVaccine[arrayindex].secondTot=int.Parse(cmd);
            break;
            case 6:
            AreaVaccine[arrayindex].thirdCnt=int.Parse(cmd);
            break;
            case 7:
            AreaVaccine[arrayindex].thirdTot=int.Parse(cmd);
            break;
        }

    }

    public void InputVaccineAll(int todaycmd1,int todaycmd2,int todaycmd3,int yesterdaycmd1,int yesterdaycmd2,int yesterdaycmd3,int allcmd1,int allcmd2,int allcmd3){
        AllVaccine_Today="당일 실적";
        Today_firstCnt=todaycmd1;
        Today_secondCnt=todaycmd2;
        Today_thirdCnt=todaycmd3;
        AllVaccine_Yesterday="전일 누적";
        Yesterday_firstCnt=yesterdaycmd1;
        Yesterday_secondCnt=yesterdaycmd2;
        Yesterday_thirdCnt=yesterdaycmd3;
        AllVaccine_All="전체 건수";
        All_firstCnt=allcmd1;
        All_secondCnt=allcmd2;
        All_thirdCnt=allcmd3;

    }

    public void InputConfirmedAll(int index,string inputcmd){

            switch(index){
                case 0:
                ACC_DEF_RATE.Add(double.Parse(inputcmd));
                break;
                case 1:
                ACC_EXAM_CNT.Add(int.Parse(inputcmd));
                break;
                case 2:
                ACC_EXAM_COMP_CNT.Add(int.Parse(inputcmd));
                break;
                case 3:
                CARE_CNT.Add(int.Parse(inputcmd));
                break;
                case 4:
                CLEAR_CNT.Add(int.Parse(inputcmd));
                break;
                case 5:
                DEATH_CNT.Add(int.Parse(inputcmd));
                break;
                case 6:
                DECIDE_CNT.Add(int.Parse(inputcmd));
                break;
                case 7:
                EXAM_CNT.Add(int.Parse(inputcmd));
                break;
                case 8:
                RESUTL_NEG_CNT.Add(int.Parse(inputcmd));
                break;
                case 9:
                STATE_DT.Add(inputcmd);
                break;
                case 10:
                STATE_TIME.Add(inputcmd);
                break;
            }
    }

   public void InputConfirmedArea(string cmd,int arrayindex,int xmlindex){

       switch(xmlindex){
           case 0:
           AllConfirmed[arrayindex].createDt=cmd;
           break;
           case 1:
           AllConfirmed[arrayindex].deathCnt=int.Parse(cmd);
           break;
           case 2:
           AllConfirmed[arrayindex].defCnt=int.Parse(cmd);
           break;
           case 3:
           AllConfirmed[arrayindex].gubun=cmd;
           break;
           case 4:
           AllConfirmed[arrayindex].incDec=int.Parse(cmd);
           break;
           case 5:
           AllConfirmed[arrayindex].isolClearCnt=int.Parse(cmd);
           break;
           //2021-11-26부터 미제공
           //case 6:
           //AllConfirmed[arrayindex].isolIngCnt=int.Parse(cmd);
           //break;
           case 7:
           AllConfirmed[arrayindex].localOccCnt=int.Parse(cmd);
           break;
           case 8:
           AllConfirmed[arrayindex].overFlowCnt=int.Parse(cmd);
           break;

       }
    }
}