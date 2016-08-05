#include "Motor.h"

using namespace lib;

static const float pwm_period = 0.1f;

Motor::Motor(PinName p1, PinName p2){
	pwm_out1 = new PwmOut(p1);
	pwm_out2 = new PwmOut(p2);

	pwm_out1->period(pwm_period);
	pwm_out2->period(pwm_period);
}

Motor::~Motor(){
	if (pwm_out1 != NULL){
		delete pwm_out1;
	}

	if (pwm_out2 != NULL){
		delete pwm_out2;
	}
}

void Motor::write(float f1, float f2){
	pwm_out1->write(f1);
	pwm_out2->write(f2);
}

