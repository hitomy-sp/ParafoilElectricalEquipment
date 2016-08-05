#ifndef _GPS_SENSOR_H_
#define _GPS_SENSOR_H_

#include "common.h"
#include "Sensor.h"
#include "SensorMessage.h"

class GpsSensor : public lib::Sensor {

public:
	GpsSensor(){};
	~GpsSensor(){};

	void init();
	
	lib::SensorMessage& get_message(); //TODO exception•K—v

private:
	bool init_once = false;
};

#endif

