#ifndef _MEMORY_H_
#define _MEMORY_H_

#include <iostream>
using namespace std;

class Memory
{
protected:
	double capacity;

public:
	virtual void activate() = 0;
	
};


#endif 