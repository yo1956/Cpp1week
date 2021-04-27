#ifndef _DO_H_
#define _DO_H_

#include "State.h"
#include "Person.h"

class Do : public State
{
private:
	static State* m_instance_d;

public:
	static State* getInstance();
	void does(Person* ps);
	void check(Person*);

};

#endif