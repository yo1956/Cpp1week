#ifndef _STATE_H_
#define _STATE_H_

#include <iostream>
using namespace std;

//#include "Person.h"
class Person;

class State
{
//private:
//	Person* ps; //

public:
	virtual void plan(Person* ps){cout << "The transition is not defined." << endl;}
	virtual void does(Person* ps){cout << "The transition is not defined." << endl;}
	virtual void check(Person* ps){cout << "The transition is not defined." << endl;}
	virtual void act(Person* ps){cout << "The transition is not defined." << endl;}

};

#endif