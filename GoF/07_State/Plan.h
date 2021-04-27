#ifndef _PLAN_H_
#define _PLAN_H_

#include "State.h"
#include "Person.h"

class Plan : public State
{
private:
	static State* m_instance_p;

public:
	static State* getInstance();
	void plan(Person*);
	void does(Person*);

};

#endif