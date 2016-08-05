#include <iostream>

#include "common.h"
#include "Logger.h"
#include "DcMotor.h"

int main(int argc, char *argv[]){

	DcMotor dc_motor(p22, p23);	

	dc_motor.write(1.0, 0.0);

	dc_motor.write(0.0, 0.0);

	return 0;

}


