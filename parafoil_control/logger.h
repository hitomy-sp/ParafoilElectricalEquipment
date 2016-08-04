#ifndef _LIB_LOGGER_H_
#define _LIB_LOGGER_H_

namespace lib {

class logger {

public:
	static logger* get_instance();

	void debug(std::string);
	void info(std::string);
	void warn(std::string);
	void error(std::string);

private:
	static logger* instance;

	enum log_level {DEBUG=0, INFO, WARN, ERROR};
	log_level current_level = log_level::INFO;

	logger(){};
	~logger(){};
	logger(logger const&); // copy constructor
	logger& operator=(logger const&); // operator
	
	void logging(log_level, std::string&);
};

}

#endif

