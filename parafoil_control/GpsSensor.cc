#include <list>
#include "GpsSensor.h"
#include "GpsSensorMessage.h"

static Serial g_gps_serial(p28, p27);

static std::list<std::string> gps_msg_list;

static void recv_callback(){	
	//�f�[�^���Ȃ��Ȃ�܂Ŏ擾����B
    while(g_gps_serial.readable())
    {
    	//�f�[�^���擾���āA���X�g�ɓ����B
    }
}

void 		GpsSensor::init(){
	
	if(init_once == true){
		return;
		
	}
	init_once = true;
	
	g_gps_serial.attach(&recv_callback);
	
	return;
}

lib::SensorMessage& GpsSensor::get_message(){
	GpsSensorMessage* zz = new GpsSensorMessage();
	return *zz;
}

