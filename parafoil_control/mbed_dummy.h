#ifndef _EMBED_DUMMY_H_
#define _EMBED_DUMMY_H_

#define USETX 0
#define USERX 1

#define p5	5
// TODO ピン番号の定義 
#define p27 27
#define p28 28


class Serial{

public:
	Serial(){};
	Serial(int psend, int precv): psend(psend), precv(precv){};
	~Serial(){};

private:
	int	psend = -1;
	int	precv = -1;

}

#endif

