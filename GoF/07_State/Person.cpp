#include "Person.h"

Person::Person()
{
	m_state = Rest::getInstance();
}

void Person::plan()
{
	m_state->plan(this);
	//Plan::plan(this);
}

void Person::does()
{
	m_state->does(this);
}

void Person::check()
{
	m_state->check(this);
}

void Person::act()
{
	m_state->act(this);
}

void Person::changeState(State* s)
{
	m_state = s;
}

State* Person::getState()
{
	return m_state;
}