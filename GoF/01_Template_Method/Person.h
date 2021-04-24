#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
using namespace std;

class Person
{
public:
	void work(){plan(); does(); check(); action();}

	virtual void plan() = 0;
	virtual void does() = 0;
	virtual void check() = 0;
	virtual void action() = 0;


};

#endif //_PERSON_H_