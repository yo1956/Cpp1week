#include "Tracer.h" // <1>

//sample04-PID-v2
//65秒くらい？でゴールできたやつ

static const float DELTA_T = 0.05;  //50ms=50000μs;
static const float KP = 0.97;
static const float KI = 0; 
static const float KD = 0.3; 
static int diff[2];
static float integral;
static const int target_val = 25;

static const int THRESHOLD_BRIGHTNESS = 25;
static const float ADJUSTER_PWM = 0.7;

//lower_limit～upper_limitの範囲にpidを制限する
float constrainPID(float pid, float upper_limit, float lower_limit){
    if(pid >= upper_limit)
      return upper_limit;
    else if(pid <= lower_limit)
      return lower_limit;
    else
      return pid;
}

Tracer::Tracer():
  leftWheel(PORT_C), rightWheel(PORT_B), colorSensor(PORT_3) { // <2>
  }

void Tracer::init() {
  init_f("Tracer");
}

void Tracer::terminate() {
  msg_f("Stopped.", 1);
  leftWheel.stop();  // <1>
  rightWheel.stop();
}

//追加
void Tracer::changePWM(){
  //直線は速く、カーブはゆっくり
  if(colorSensor.getBrightness() >= THRESHOLD_BRIGHTNESS - 1 &&
         colorSensor.getBrightness() <= THRESHOLD_BRIGHTNESS + 1) 
    pwm = (Motor::PWM_MAX) * ADJUSTER_PWM;
  else
    pwm = PWM_INIT; 
}

//追加
float Tracer::calcPID(){
  float p, i, d;
  
  diff[0] = diff[1];
  diff[1] = colorSensor.getBrightness() - target_val;
  integral += (diff[1] + diff[0]) / 2.0 * DELTA_T;

  p = KP * diff[1];
  i = KI * integral;
  d = KD * (diff[1] - diff[0]) / DELTA_T;
  
  return constrainPID(p+i+d, (Motor::PWM_MAX) - pwm, (Motor::PWM_MAX)*(-1) - pwm);
}

void Tracer::run() {
  msg_f("running...", 1);
  this->changePWM();
  float pid = this->calcPID();
  leftWheel.setPWM(pwm + pid);
  rightWheel.setPWM(pwm - pid);

  // const float Kp = 0.8;
  // const int target = 30; 
  // const int bias = 0;
  
  // msg_f("running...", 1);
  // this->changePWM();
  // int diff = colorSensor.getBrightness() - target;
  // float turn = Kp * diff + bias;
  // leftWheel.setPWM(pwm + turn);
  // rightWheel.setPWM(pwm - turn);
  
}

