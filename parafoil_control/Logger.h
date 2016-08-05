#ifndef _LIB_LOGGER_H_
#define _LIB_LOGGER_H_

#include <iostream>

namespace lib {

class Logger {

public:
	static Logger* get_instance();

	void debug(std::string);
	void info(std::string);
	void warn(std::string);
	void error(std::string);

private:
	static Logger* instance;

	enum log_level {DEBUG=0, INFO, WARN, ERROR};
	log_level current_level = log_level::INFO;

	Logger(){};
	~Logger(){};
	Logger(Logger const&); // copy constructor
	Logger& operator=(Logger const&); // operator
	
	void logging(log_level, std::string&);
};

}

#endif

