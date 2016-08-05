#include "GpsSensorMessage.h"

std::string GpsSensorMessage::to_str(){
	// TODO debug用？
	return "";
}

void 		GpsSensorMessage::set_gps_msg_id(std::string gps_msg_id){
	this->gps_msg_id = gps_msg_id;
}

std::string GpsSensorMessage::get_gps_msg_id(){
	return gps_msg_id;
}

void 		GpsSensorMessage::set_gps_utc_time(std::string gps_utc_time){
	this->gps_utc_time = gps_utc_time;
}

std::string GpsSensorMessage::get_gps_utc_time(){
	return gps_utc_time;	
}

void 		GpsSensorMessage::set_gps_status(std::string gps_status){
	this->gps_status = gps_status;
}

std::string GpsSensorMessage::get_gps_status(){
	return gps_status;
}

void 		GpsSensorMessage::set_gps_latitude(double gps_latitude){
	this-> gps_latitude = gps_latitude;
]

double 		GpsSensorMessage::get_gps_latitude(){
	reutrn gps_latitude;
}

void 		GpsSensorMessage::set_gps_ns_indicator(std::string gps_ns_indicator){
	this->gps_ns_indicator = gps_ns_indicator;
}

std::string GpsSensorMessage::get_gps_ns_indicator(){
	return gps_ns_indicator;
}

void 		GpsSensorMessage::set_gps_longitude(double gps_longitude){
	this->gps_longitude = gps_longitude;
}

double 		GpsSensorMessage::get_gps_longitude(){
	return gps_longitude;
}

void 		GpsSensorMessage::set_gps_ew_indicator(std::string gps_ew_indicator){
	this->gps_ew_indicator = gps_ew_indicator;
}

std::string GpsSensorMessage::get_gps_ew_indicator(){
	return gps_ew_indicator;
]

void 		GpsSensorMessage::set_gps_speed_over_ground(double gps_speed_over_ground){
	this->gps_speed_over_ground = gps_speed_over_ground;
}

double		GpsSensorMessage::get_gps_speed_over_ground(){
	return gps_speed_over_ground;
}

void 		GpsSensorMessage::set_gps_couse_over_ground(double gps_couse_over_ground){
	this->gps_couse_over_ground = gps_couse_over_ground;
}

double		GpsSensorMessage::get_gps_couse_over_ground()

void 		GpsSensorMessage::set_gps_date(std::string);
std::string	GpsSensorMessage::get_gps_date();

void 		GpsSensorMessage::set_gps_magnetic_variation(double);
double		GpsSensorMessage::get_gps_magnetic_variation();

void 		GpsSensorMessage::set_gps_magnetic_ew_indicator(std::string);
std::string	GpsSensorMessage::get_gps_magnetic_ew_indicator();

void 		GpsSensorMessage::set_gps_mode(std::string);
std::string GpsSensorMessage::get_gps_mode();

void 		GpsSensorMessage::set_gps_checksum(int);
int			GpsSensorMessage::get_gps_checksum();


