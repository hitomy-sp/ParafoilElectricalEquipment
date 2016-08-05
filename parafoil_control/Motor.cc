#include "Motor.h"

using namespace lib;

static PwmOut g_pwm_out1(p22);
static PwmOut g_pwm_out2(p23);

static const float pwm_period = 0.1f;

void Motor::init(){
	pwm_out1 = &g_pwm_out1;
	pwm_out2 = &g_pwm_out2;
}

void Motor::write(float f1, float f2){
	pwm_out1->write(f1);
	pwm_out2->write(f2);
}

