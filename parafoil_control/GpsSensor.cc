#include <list>
#include "GpsSensor.h"
#include "NoneSensorMessage.h"
#include "GpsSensorMessage.h"

using namespace lib;

static Serial g_gps_serial(p28, p27);

static std::list<std::string> g_gps_msg_list;

static void recv_callback(){	
	//データがなくなるまで取得する。
	std::string tmpString = "";
	while(g_gps_serial.readable()){
		char tc = g_gps_serial.getc();
		if(tc == '\n'){
			tmpString.erase( --tmpString.end() );
			g_gps_msg_list.push_back(tmpString);
			tmpString = ""
		}else{
			tmpString += tc;
		}
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

SensorMessage& GpsSensor::get_message(){
	if (g_gps_msg_list.size() <= 0){
		return new NoneSensorMessage();
	}

	//データ解析(1番最新のデータ取得)
	auto itr = g_gps_msg_list.end();
	std::string tmpString = *itr;
    list<string> result;
 
    int pos;
    while((pos = tmpString.find_first_of(',')) != str.npos) {
        if(pos > 0) {
            result.push_back(str.substr(0, pos));
        }
        str = str.substr(pos + 1);
    }
    if(str.length() > 0) {
        result.push_back(str);
    }
	g_gps_msg_list.clear();
	
	double d_latitude = atof(result[3]);
	double d_longitude = atof(result[5]);
	double d_speed_over_ground = atof(result[6]);
	double d_course_over_ground = atof(result[7]);
	double d_magnetic_variation = atof(result[9]);
	int d_checksum = atoi(result[12]);

	GpsSensorMessage* g_message = new GpsSensorMessage();

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
