#ifndef _MANAGER_H_
#define _MANAGER_H_

#include "Person.h"

class Manager : public Person
{
public:
	//Manager();

	void plan(){cout << "planning by myself" << endl;}
	void does(){cout << "giving instructions and receiving reports" << endl;}
	void check(){cout << "checking reports" << endl;}
	void action(){cout << "take action if necessary" << endl;}

};

#endif // _MANAGER_H_