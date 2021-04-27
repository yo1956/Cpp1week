#ifndef _ACT_H_
#define _ACT_H_

#include "State.h"
#include "Person.h"

class Act : public State
{
private:
	static State* m_instance_a;

public:
	static State* getInstance();
	void act(Person* ps);

};

#endif