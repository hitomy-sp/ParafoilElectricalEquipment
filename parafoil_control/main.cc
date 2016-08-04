#include <iostream>
#include "Logger.h"

using namespace lib;

int main(int argc, char *argv[]){

	Logger* logger = Logger::get_instance();

	logger->debug("debug");
	logger->info("info");
	logger->warn("warn");
	logger->error("error");

	return 0;

}

