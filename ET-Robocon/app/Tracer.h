#include "Motor.h"       // <1>
#include "ColorSensor.h" // <2>
#include "util.h"        // <3>

using namespace ev3api;  // <4>

const int8_t PWM_INIT = (Motor::PWM_MAX) * 0.27;

class Tracer {  // <1>
public:
  Tracer();
  void changePWM();    //追加
  void run();       // <2>
  void init();
  void terminate();
  float calcPID();          //追加
 

private:
  Motor leftWheel;
  Motor rightWheel;
  ColorSensor colorSensor; // <3>
  const int8_t mThreshold = 20;  // <4> //サンプル初期値20
  // const int8_t pwm = (Motor::PWM_MAX) / 6; //サンプル初期値 は PWM_MAX/6
  int8_t pwm = PWM_INIT; //サンプル初期値 は PWM_MAX/6
  // const int8_t pwm = (Motor::PWM_MAX) * 0.2; //サンプル初期値 は PWM_MAX/6
};
