#ifndef _EARTHQUAKEALARM_H_
#define _EARTHQUAKEALARM_H_

#include <iostream>
#include <vector>
using namespace std;

#include "Observer.h"

class EarthquakeAlarm
{
private:
	vector<Observer*> observer;

public:
	void subscribe(Observer*);
	void alarm();

};

#endif