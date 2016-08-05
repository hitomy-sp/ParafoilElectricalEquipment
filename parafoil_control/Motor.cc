#ifndef _LIB_MOTOR_H_
#define _LIB_MOTOR_H_

#ifdef LOCAL_LINUX_DEBUG
#include "mbed_dummy.h"
#else
#include "mbed.h"
#endif

namespace lib {

class Motor {

public:
	Motor(){};
	virtual ~Motor(){};

	virtual void init();

	virtual void write(float, float);

private:
	boolean init_once = false

	PwmOut*	pwm_out1 = NULL;
	PwmOut*	pwm_out2 = NULL;

};

}

#endif

