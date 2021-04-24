#ifndef _CHECK_H_
#define _CHECK_H_

#include "work_step.h"

class Check : public WorkStep
{
public:
	void exec(){cout << "Check" << endl;}

};

#endif