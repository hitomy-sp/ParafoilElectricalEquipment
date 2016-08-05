#ifndef _LIB_MOTOR_H_
#define _LIB_MOTOR_H_

#include "common.h"

namespace lib {

class Motor {

public:
	Motor(PinName p1, PinName p2);
	virtual ~Motor();

	virtual void write(float, float);

private:
	Motor();

	PwmOut*	pwm_out1 = NULL;
	PwmOut*	pwm_out2 = NULL;
};

}

#endif

