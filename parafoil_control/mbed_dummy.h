#ifndef _EMBED_DUMMY_H_
#define _EMBED_DUMMY_H_

#define USETX 0	// USBTX
#define USERX 1	// USBRX

#define p22 22  // PwmOut
#define p23 23  // PwmOut

#define p27 27	// Serial TX
#define p28 28	// Serial RX


class Serial{

public:
	Serial(){};
	Serial(int psend, int precv): psend(psend), precv(precv){};
	~Serial(){};

	void attach(void (*func)()){};
	bool readable(){ return true; };

private:
	int	psend = -1;
	int	precv = -1;

};

class PwmOut {

public:
	PwmOut(){};
	PwmOut(int p): pin(p){};

	void period(float f){};
	void write(float f){};
private:
	int pin = -1;

};

#endif

