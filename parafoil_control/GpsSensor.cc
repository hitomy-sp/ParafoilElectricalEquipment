#include <list>
#include "GpsSensor.h"
#include "GpsSensorMessage.h"

static Serial g_gps_serial(p28, p27);

static std::list<std::string> gps_msg_list;

static void recv_callback(){	
	//データがなくなるまで取得する。
	std::string tmpString = "";
	while(gps_serial.readable())
	{
		char tc = gps_serial.getc();
		if(tc == '\n')
		{
			//電文1つ追加
			gps_msg_list.push_back(tmpString);
			
		}else
		{
			tmpString += tc;
		}
	}
	//改行コードまで送られてきていない電文は捨てる
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

	GpsSensorMessage* g_message = new GpsSensorMessage();
	
	//データ解析(1番最新のデータ取得)
	std::string tmpString = gps_msg_list.end();
    list<string> result;
 
    int pos;
    while((pos = tmpString.find_first_of(delim)) != str.npos) {
        if(pos > 0) {
            result.push_back(str.substr(0, pos));
        }
        str = str.substr(pos + 1);
    }
    if(str.length() > 0) {
        result.push_back(str);
    }
	gps_msg_list.clear();
	
	double d_latitude = atof(result[3]);
	double d_longitude = atof(result[5]);
	double d_speed_over_ground = atof(result[6]);
	double d_course_over_ground = atof(result[7]);
	double d_magnetic_variation = atof(result[9]);
	int d_checksum = atoi(result[12]);

	g_message->set_gps_msg_id(result[0])
    g_message->set_gps_utc_time(result[1]);
    g_message->set_gps_status(result[2]);
    g_message->set_gps_latitude(d_latitude);
    g_message->set_gps_ns_indicator(result[4]);
    g_message->set_gps_longitude(d_longitude);
    g_message->set_gps_ew_indicator(result[6]);
    g_message->set_gps_speed_over_ground(d_speed_over_ground);
	g_message->set_gps_course_over_ground(d_course_over_ground);
    g_message->set_gps_date(result[8]);
    g_message->set_gps_magnetic_variation(d_magnetic_variation);
    g_message->set_gps_magnetic_ew_indicator(result[10]);
    g_message->set_gps_mode(result[11]);
	g_message->set_gps_checksum(d_checksum);
	
	return *g_message;
}
