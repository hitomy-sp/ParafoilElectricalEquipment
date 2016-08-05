#ifndef _LIB_GPS_SENSOR_MESSAGE_H_
#define _LIB_GPS_SENSOR_MESSAGE_H_

#include "SensorMessage.h"

class GpsSensorMessage : public lib::SensorMessage {

public:
	GpsSensorMessage(){};
	GpsSensorMessage(std::string msg): lib::SensorMessage(msg){};
	~GpsSensorMessage(){};
	
	std::string to_str(){ return msg; };
private:

};


#endif
