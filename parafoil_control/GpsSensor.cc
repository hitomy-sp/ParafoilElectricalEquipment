#include "GpsSensor.h"

void 		GpsSensor::init(){
	
	if(init_once == true){
		return;
		
	}
	init_once = true;
	
	//27P 28P���g�p
	gps_serial = new Serial(p28,p27)
	
	//CallBack�ݒ�
	serial_gps.attach(&recv_callback);
	
	return;
}

void 		GpsSensor::recv_callback(){
	
	//�f�[�^���Ȃ��Ȃ�܂Ŏ擾����B
    while(gps_serial.readable())
    {
    	//�f�[�^���擾���āA���X�g�ɓ����B
    }
	
}
