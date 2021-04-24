#ifndef _WORKER_H_
#define _WORKER_H_

#include "Person.h"

class Worker : public Person
{
public:
	//Worker();


	void plan(){cout << "receiving instructions" << endl;}
	void does(){cout << "doing by myself" << endl;}
	void check(){cout << "checking my work" << endl;}
	void action(){cout << "creating a report" << endl;}

};

#endif //_WORKER_H_