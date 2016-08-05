#include "GpsSensor.h"

void 		GpsSensor::init(){
	
	if(init_once == true){
		return;
		
	}
	init_once = true;
	
	//27P 28Pを使用
	gps_serial = new Serial(p28,p27)
	
	//CallBack設定
	serial_gps.attach(&recv_callback);
	
	return;
}

void 		GpsSensor::recv_callback(){
	
	//データがなくなるまで取得する。
    while(gps_serial.readable())
    {
    	//データを取得して、リストに入れる。
    }
	
}
