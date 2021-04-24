#ifndef _ACTION_H_
#define _ACTION_H_

#include "work_step.h"

class Action : public WorkStep
{
public:
	void exec(){cout << "Action" << endl;}

};

#endif //_PLAN_H_