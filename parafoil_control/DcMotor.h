#ifndef _DC_MOTOR_H_
#define _DC_MOTOR_H_

#include "common.h"
#include "Motor.h"

class DcMotor : public lib::Motor {

public:
	DcMotor(PinName p1, PinName p2): lib::Motor(p1, p2){};
	~DcMotor(){};

private:
	DcMotor();
};


#endif

