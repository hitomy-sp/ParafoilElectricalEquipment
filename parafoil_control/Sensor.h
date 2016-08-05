#ifndef _LIB_SENSOR_H_
#define _LIB_SENSOR_H_

#include "SensorMessage.h"

namespace lib {

class Sensor {

public:
	Sensor(){};
	virtual ~Sensor(){};

	virtual void init(){};
	
	virtual SensorMessage& get_message() = 0;

private:

};

}

#endif

