#ifndef _LIB_NONE_SENSOR_MESSAGE_H_
#define _LIB_NONE_SENSOR_MESSAGE_H_

namespace lib {

class NoneSensorMessage : public SensorMessage {

public:
	NoneSensorMessage(){};
	NoneSensorMessage(std::string msg){};
	~NoneSensorMessage(){};
	
	std::string to_str(){ return msg; };
private:

}

}

#endif
