#ifndef _GPS_SENSOR_MESSAGE_H_
#define _GPS_SENSOR_MESSAGE_H_

#include "SensorMessage.h"

class GpsSensorMessage : public lib::SensorMessage {

public:
	GpsSensorMessage(){};
	GpsSensorMessage(std::string msg): lib::SensorMessage(msg){};
	~GpsSensorMessage(){};

	std::string to_str();

	void 		set_gps_msg_id(std::string);
	std::string get_gps_msg_id();

	void 		set_gps_utc_time(std::string);
	std::string get_gps_utc_time();

	void 		set_gps_status(std::string);
	std::string get_gps_status();

	void 		set_gps_latitude(double);
	double 		get_gps_latitude();

	void 		set_gps_ns_indicator(std::string);
	std::string get_gps_ns_indicator();

	void 		set_gps_longitude(double);
	double 		get_gps_longitude();

	void 		set_gps_ew_indicator(std::string);
	std::string get_gps_ew_indicator();

	void 		set_gps_speed_over_ground(double);
	double		get_gps_speed_over_ground();

	void 		set_gps_course_over_ground(double);
	double		get_gps_course_over_ground();

	void 		set_gps_date(std::string);
	std::string	get_gps_date();

	void 		set_gps_magnetic_variation(double);
	double		get_gps_magnetic_variation();

	void 		set_gps_magnetic_ew_indicator(std::string);
	std::string	get_gps_magnetic_ew_indicator();

	void 		set_gps_mode(std::string);
	std::string get_gps_mode();

	void 		set_gps_checksum(int);
	int			get_gps_checksum();

private:

	std::string gps_msg_id = "";
	std::string gps_utc_time = "";			// hhmmss.sss
	std::string gps_status = "";
	double 		gps_latitude = 0;
	std::string gps_ns_indicator = "";
	double 		gps_longitude = 0;
	std::string gps_ew_indicator = "";
	double		gps_speed_over_ground = 0; // knots
	double		gps_course_over_ground = 0; // degree
	std::string	gps_date = "";				// ddmmyy
	double		gps_magnetic_variation = 0; // degree
	std::string	gps_magnetic_ew_indicator = "";
	std::string gps_mode = "";				// A=Autonomous, D=DGPS, E=DR
	int			gps_checksum = 0;

};


#endif
