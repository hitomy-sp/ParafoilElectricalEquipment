#ifndef _PARAFOIL_CONTROL_H_
#define _PARAFOIL_CONTROL_H_

class ParafoilControlMain {

public:
	ParafoilControlMain(){};
	~ParafoilControlMain(){};

	void operator()();
	void execute();

private:
	void init();

};

#endif

