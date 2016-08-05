#ifndef _LIB_SENSOR_MESSAGE_H_
#define _LIB_SENSOR_MESSAGE_H_

namespace lib {

class SensorMessage {

public:
	SensorMessage(): msg(""){};
	SensorMessage(std::string msg): msg(msg){};
	virtual ~SensorMessage(){};
	
	virtual std::string to_str() = 0;
protected:
	std::string msg = "";

private:

};

}

#endif
