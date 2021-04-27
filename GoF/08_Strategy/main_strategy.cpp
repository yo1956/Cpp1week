#include "Person.h"
#include "ManagerStrategy.h"
#include "WorkerStrategy.h"

int main(){
	Person* ps = new Person();
	WorkStrategy* work = new ManagerStrategy();

	ps->assign(work);
	ps->work();

	work = new WorkerStrategy();

	ps->assign(work);
	ps->work();

	delete ps, work;
}