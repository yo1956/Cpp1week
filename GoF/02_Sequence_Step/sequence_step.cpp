#include "plan.h"
#include "do.h"
#include "check.h"
#include "action.h"
#include "work_sequence.h"
#include "work_step.h"
#include "person.h"

int main(){
	WorkSequence* ws = new WorkSequence();
	Person* person = new Person();
	WorkStep* plan = new Plan();
	WorkStep* does = new Do();
	WorkStep* check = new Check();
	WorkStep* action = new Action();

	ws->addStep(plan);
	
	ws->addStep(check);
	ws->addStep(action);
	ws->addStep(does);

	person->addSequence(ws);
	person->work();

	delete ws, person, plan, does, check, action;
}
