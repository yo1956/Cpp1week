#ifndef _REST_H_
#define _REST_H_

#include "State.h"
#include "Person.h"

class Rest : public State
{
private:
	static State* m_instance_r;

public:
	static State* getInstance();
	void plan(Person*);
	

};

#endif