#ifndef _GPS_SENSOR_H_
#define _GPS_SENSOR_H_

#ifdef LOCAL_LINUX_DEBUG
#include "mbed_dummy.h"
#else
#include "mbed.h"
#endif

class GpsSensor : public lib::Sensor {

public:
	GpsSensor();
	~GpsSensor();
	
	void init();
	
	SensorMessage get_message();

private:
	boolean init_once = false;
	
	void recv_callback();

}

#endif

