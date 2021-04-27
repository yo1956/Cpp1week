#include "Check.h"

State* Check::m_instance_c = new Check();

State* Check::getInstance()
{
	return m_instance_c;
}

void Check::check(Person* ps)
{
	cout << "Check" << endl;
}

void Check::act(Person* ps)
{
	ps->changeState(Act::getInstance());
	ps->getState()->act(ps);
}
