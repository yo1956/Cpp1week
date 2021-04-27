#ifndef _PERSON_H_
#define _PERSON_H_

class State;
//#include "State.h"


#include "Rest.h"
#include "Plan.h"
#include "Do.h"
#include "Check.h"
#include "Act.h"

#include <iostream>
using namespace std;

class Person
{
private:
	State* m_state;

public:
	Person();

	void plan();
	void does();
	void check();
	void act();
	void changeState(State*);
	State* getState();
};

#endif