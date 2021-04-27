#include "Person.h"
#include "State.h"
#include "Rest.h"
#include "Plan.h"
#include "Do.h"
#include "Check.h"
#include "Act.h"

int main()
{
	/*State* rest = new Rest();
	State* plan = new Plan();
	State* does = new Do();
	State* check = new Check();
	State* act = new Act();*/


	Person* person = new Person();

	person->plan();
	person->does();
	person->check();
	person->act();
	


}