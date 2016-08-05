#ifndef _GPS_SENSOR_H_
#define _GPS_SENSOR_H_

#include "common.h"

class GpsSensor : public lib::Sensor {

public:
	GpsSensor(){};
	~GpsSensor(){};

	void init();
	
	SensorMessage get_message();//exception•K—v

private:
	boolean init_once = false;
	Serial*		gps_serial = NULL;
	list<std::string> gps_msg_list;
	
	void recv_callback();

}

#endif

