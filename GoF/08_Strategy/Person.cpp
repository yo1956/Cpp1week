#include "Person.h"

void Person::assign(WorkStrategy* ws)
{
	strategy = ws;
}


void Person::work()
{
	strategy->work();
}