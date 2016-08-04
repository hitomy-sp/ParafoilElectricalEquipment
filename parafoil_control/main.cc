#include <iostream>
#include "logger.h"

using namespace lib;

int main(int argc, char *argv[]){

	logger* logger = logger->get_instance();

	logger->debug("debug");
	logger->info("info");
	logger->warn("warn");
	logger->error("error");

	return 0;

}

