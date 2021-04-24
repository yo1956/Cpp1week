#include "Manager.h"
#include "Worker.h"
//#include "Person.h"

int main()
{
	Person* manager = new Manager();
	Person* worker = new Worker();

	manager->work();

	cout << endl;

	worker->work();

	delete manager, worker;

}