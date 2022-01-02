using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeatherArea : MonoBehaviour
{
    //지역 이름 -0
    [SerializeField] string AreaName;
    //3시간 단위 시간 -1
    [SerializeField]int hour;
    //오늘:0 내일:1 모레:2 -2
    [SerializeField]int day;
    //현재온도 -3
    [SerializeField]float temp;
    //최고온도 -4
    [SerializeField]float tmx;
    //최저온도 -5
    [SerializeField]float tmn;
    // 1:맑음 3:구름많음 4:흐림 -6
    [SerializeField]int sky;
    // 0:없음 1:비 2:비/눈 3:눈 4:소나기 -7
    [SerializeField]int pty;
    /*
    날씨 한국어
    1:맑음
    2.구름 많음 
    3.흐림
    4.비
    5.비/눈
    6.눈
    7.소나기
    -8 */
    [SerializeField]string wfKor;
    /*
    날씨 영어
    1.Clear
    2.Mostly Cloudy
    3.Cloudy
    4.Rain
    5.Rain/Snow
    6.Snow
    7.Shower
    -9 */
    [SerializeField]string wfEn;
    //강수확률 -10
    [SerializeField]float pop;
    /*
    12시간 예상강수량
    [강수량범주 및 표시방법 / 저장값]
    1 : 0.1mm 미만 (0mm 또는 없음) / 0 <= x < 0.1
    2 : 0.1mm 이상 1mm 미만(1mm 미만) / 0.1 <= x < 1
    3 : 1mm 이상 5mm 미만(1~4mm) / 1 <= x < 5
    4 : 5mm 이상 10mm 미만(5~9mm) /5 <= x < 10
    5 : 10mm 이상 25mm 미만(10~24mm) / 10 <= x < 25
    6 : 25mm 이상 50mm 미만(25~49mm) / 25 <= x < 50
    7 : 50mm 이상(50mm 이상) / 50 <= x
    -11 */
    [SerializeField]float r12;
    /*
    12시간 예상적설량
    [적설량범주 및 표시방법 / 저장값]
    1 : 0.1cm 미만 (0mm 또는 없음) / 0 <= x < 0.1
    2 : 0.1mm 이상 1mm 미만(1mm 미만) / 0.1 <= x < 1
    3 : 1mm 이상 5mm 미만(1~4mm) / 1 <= x < 5
    4 : 5mm 이상 10mm 미만(5~9mm) /5 <= x < 10
    5 : 10mm 이상 25mm 미만(10~24mm) / 10 <= x < 20
    6 : 50mm 이상(50mm 이상) / 20 <= x
    -12 */
    [SerializeField]float s12;
    //풍속(m/s) : 반올림처리 값 이용(정수) -13
    [SerializeField]float ws;
    //풍향 : 풍향 0~7 (북, 북동, 동, 남동, 남, 남서, 서, 북서) -14
    [SerializeField]int wd;
    /*
    풍향 한국어 / 영어
    1 : 동(E)
    2 : 북(N)
    3 : 북동(NE)
    4 : 북서(NW)
    5 : 남(S)
    6 : 남동(SE)
    7 : 남서(SW)
    8 : 서(W)
    -15 16*/
    [SerializeField]string wdKor;
    [SerializeField]string wdEn;
    //습도% -17
    [SerializeField]float reh;
    //6시간 예상강수량 -18
    [SerializeField]float r06;
    //6시간 예상강수량 -19
    [SerializeField]float s06;

    public void ADDWeatherData(
    int cmdhour,
    int cmdday,
    float cmdtemp,
    float cmdtmx,
    float cmdtmn,
    int cmdsky,
    int cmdpty,
    string cmdwfKor,
    string cmdwfEn,
    float cmdpop,
    float cmdr12,
    float cmds12,
    float cmdws,
    int cmdwd,
    string cmdwdKor,
    string cmdwdEn,
    float cmdreh,
    float cmdr06,
    float cmds06
    ){
    hour=cmdhour;
    day=cmdday;
    temp=cmdtemp;
    tmx=cmdtmx;
    tmn=cmdtmn;
    sky=cmdsky;
    pty=cmdpty;
    wfKor=cmdwfKor;
    wfEn=cmdwfEn;
    pop=cmdpop;
    r12=cmdr12;
    s12=cmds12;
    ws=cmdws;
    wd=cmdwd;
    wdKor=cmdwdKor;
    wdEn=cmdwdEn;
    reh=cmdreh;
    r06=cmdr06;
    s06=cmds06;
    }
    public void addareaname(string cmd){
        AreaName=cmd;
        
    }
    public string WeatherAreareturn_string(int index){
        switch(index){
            case 0:
            return AreaName;
            case 8:
            return wfKor;
            case 9:
            return wfEn;
            case 15:
            return wdKor;
            case 16:
            return wdEn;
            default:
            return "";
        }
    }
        public int WeatherAreareturn_int(int index){
            switch(index){
                case 1:
                return hour;
                case 2:
                return day;
                case 6:
                return sky;
                case 7:
                return pty;
                case 14:
                return wd;
                default:
                return 0;
            }
        }

        public float WeatherAreareturn_float(int index){
        switch(index){
                case 3:
                return temp;
                case 4:
                return tmx;
                case 5:
                return tmn;
                case 10:
                return pop;
                case 11:
                return r12;
                case 12:
                return s12;
                case 13:
                return ws;
                case 17:
                return reh;
                case 18:
                return r06;
                case 19:
                return s06;
                default:
                return 0f;
            }
        }
}
