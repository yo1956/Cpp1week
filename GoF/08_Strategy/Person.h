#ifndef _PERSON_H_
#define _PERSON_H_

#include "WorkStrategy.h"

#include <iostream>
using namespace std;

class Person
{
private:
	WorkStrategy* strategy;

public:
	void assign(WorkStrategy*);
	void work();

};

#endif
