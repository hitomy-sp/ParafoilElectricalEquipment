#ifndef _LIB_MOTOR_H_
#define _LIB_MOTOR_H_

#include "common.h"

namespace lib {

class Motor {

public:
	Motor(){ init(); };
	virtual ~Motor(){};

	virtual void init();

	virtual void write(float, float);

private:
	bool init_once = false;

	PwmOut*	pwm_out1 = NULL;
	PwmOut*	pwm_out2 = NULL;


};

}

#endif

