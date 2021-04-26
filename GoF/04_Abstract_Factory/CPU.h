#ifndef _CPU_H_
#define _CPU_H_

#include <iostream>
using namespace std;

class CPU
{
protected:
	double clock;

public:
	virtual void activate() = 0;
	
};


#endif 