#include "Plan.h"

State* Plan::m_instance_p = new Plan();

State* Plan::getInstance()
{
	//State* plan = new Plan();
	//m_instance_p = plan;
	return m_instance_p;
}

void Plan::plan(Person* ps)
{
	cout << "Plan" << endl;
}

void Plan::does(Person* ps)
{
	ps->changeState(Do::getInstance());
	ps->getState()->does(ps);

}

