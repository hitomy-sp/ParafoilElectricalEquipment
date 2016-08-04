#include <iostream>
#include "Logger.h"

using namespace lib;

Logger* Logger::instance = NULL;

Logger* Logger::get_instance(){

	if(! instance){
		instance = new Logger;
	}

	return instance;
}

void Logger::debug(std::string msg){
	logging(log_level::DEBUG, msg);
}


void Logger::info(std::string msg){
	logging(log_level::INFO, msg);
}

void Logger::warn(std::string msg){
	logging(log_level::WARN, msg);
}

void Logger::error(std::string msg){
	logging(log_level::ERROR, msg);
}

void Logger::logging(log_level lv, std::string& msg){

	// TODO: log level
	std::cout << lv <<  ":" << msg << std::endl;
}

