#include "Rest.h"

State* Rest::m_instance_r = new Rest();

State* Rest::getInstance()
{
	/*State* rest = new Rest();
	m_instance_r = rest;*/
	return m_instance_r;
}

void Rest::plan(Person* ps)
{
	ps->changeState(Plan::getInstance());

	//Plan::plan(ps);
	//ps->m_state->plan(ps);
	ps->getState()->plan(ps);
}