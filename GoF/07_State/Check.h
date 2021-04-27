#ifndef _CHECK_H_
#define _CHECK_H_

#include "State.h"
#include "Person.h"

class Check : public State
{
private:
	static State* m_instance_c;

public:
	static State* getInstance();
	void check(Person* ps);
	void act(Person*);

};

#endif