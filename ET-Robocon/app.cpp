#include "app.h" // <1>
#include "Tracer.h" // <2>
#include "Clock.h"  // <3>
using namespace ev3api;

/**
 * シミュレータかどうかの定数を定義します
 */
#if defined(MAKE_SIM)
    static const int _SIM = 1;
#elif defined(MAKE_EV3)
    static const int _SIM = 0;
#else
    static const int _SIM = 0;
#endif
    
/**
 * センサー、モーターの接続を定義します
 */
static const sensor_port_t
    touch_sensor    = EV3_PORT_1,
    color_sensor    = EV3_PORT_3,
    sonar_sensor    = EV3_PORT_2,
    gyro_sensor     = EV3_PORT_4;

static const motor_port_t
    left_motor      = EV3_PORT_C,
    right_motor     = EV3_PORT_B;
    
/* LCDフォントサイズ */
#define CALIB_FONT (EV3_FONT_SMALL)
#define CALIB_FONT_WIDTH (6/*TODO: magic number*/)
#define CALIB_FONT_HEIGHT (8/*TODO: magic number*/)

Tracer tracer;  // <4>
Clock clock;    // <5>

static void _syslog(int level, char* text){
    static int _log_line = 0;
    if (_SIM)
    {
        syslog(level, text);
    }
    else
    {
        ev3_lcd_draw_string(text, 0, CALIB_FONT_HEIGHT*_log_line++);
    }
}

static void _log(char *text){
    _syslog(LOG_NOTICE, text);
}

//ログ用
//現在時刻を取得する。offsetで、測定開始時刻の補正を行う
long getTime(long offset){
  SYSTIM tim;
  get_tim(&tim);
  return ((long)tim - offset);
}

void tracer_task(intptr_t exinf) { // <1>
  tracer.run(); // <2>
  
  //ログ用
  _log("HackEV sample04"); //ログを残す
  long starttime;          //走行開始時刻
  char str[256];           //文字列表示用バッファ
  uint8_t reflect;         //カラーセンサ値 
  int32_t motorCountL;     //左モータの動き
  int32_t motorCountR;     //右モータの動き
  
  starttime= getTime(0L);

  tslp_tsk(4 * 1000U);                                  /* 4msec周期起動 */
  reflect = ev3_color_sensor_get_reflect(color_sensor); //カラーセンサの値取得
  motorCountL = ev3_motor_get_counts(left_motor);       //モータの角位置取得
  motorCountR = ev3_motor_get_counts(right_motor);      //モータの角位置取得
  sprintf(str, "%ld,%d,%d,%d", getTime(starttime),
          (int)reflect, (int)motorCountL, (int)motorCountR);
  _log(str); // コンソールに表示する。

  ext_tsk();
}



void main_task(intptr_t unused) { // <1>
  
  const uint32_t duration = 100; // <2>
  
  // long starttime = getTime(0L); //スタート時刻を記録しておく

  tracer.init(); // <3>
  sta_cyc(TRACER_CYC); // <4>
  
  while (!ev3_button_is_pressed(LEFT_BUTTON)) { // <1>
      clock.sleep(duration);   // <2>
  }

  // stp_cyc(TRACER_CYC); // <3>
  // tracer.terminate(); // <4>
  // ext_tsk(); // <5>
}

