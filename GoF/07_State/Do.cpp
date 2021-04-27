#include "Do.h"

State* Do::m_instance_d = new Do();

State* Do::getInstance()
{
	return m_instance_d;
}

void Do::does(Person* ps)
{
	cout << "Do" << endl;
}

void Do::check(Person* ps)
{
	ps->changeState(Check::getInstance());
	ps->getState()->check(ps);
}
