#include <iostream>
#include "Logger.h"
#include "GpsSensorMessage.h"

using namespace lib;


int main(int argc, char *argv[]){

#ifdef LOCAL_LINUX_DEBUG
	GpsSensorMessage gsm;
	GpsSensorMessage gsm2("abc");

	Logger* logger = Logger::get_instance();

	logger->debug(gsm.to_str());
	logger->debug(gsm2.to_str());
	logger->info("info");
	logger->warn("warn");
	logger->error("error");
#endif

	return 0;

}


