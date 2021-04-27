#include "Act.h"

State* Act::m_instance_a = new Act();

State* Act::getInstance()
{
	return m_instance_a;
}

void Act::act(Person* ps)
{
	cout << "Act" << endl;

	ps->changeState(Rest::getInstance());
}

