#include <iostream>
#include "logger.h"

using namespace lib;

logger* logger::instance = NULL;

logger* logger::get_instance(){

	if(! instance){
		instance = new logger;
	}

	return instance;
}

void logger::debug(std::string msg){
	logging(log_level::DEBUG, msg);
}


void logger::info(std::string msg){
	logging(log_level::INFO, msg);
}

void logger::warn(std::string msg){
	logging(log_level::WARN, msg);
}

void logger::error(std::string msg){
	logging(log_level::ERROR, msg);
}

void logger::logging(log_level lv, std::string& msg){

	// TODO: log level
	std::cout << lv <<  ":" << msg << std::endl;
}

