#ifndef _COMPANY_H_
#define _COMPANY_H_

#include "Observer.h"

class Company: public Observer
{
public:
	void notify();

};

#endif