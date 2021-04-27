#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <iostream>

using namespace std;

class Observer
{

public:
	virtual void notify() = 0;

};

#endif