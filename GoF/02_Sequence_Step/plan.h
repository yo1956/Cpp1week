#ifndef _PLAN_H_
#define _PLAN_H_

#include "work_step.h"

class Plan : public WorkStep
{
public:
	void exec(){cout << "Plan" << endl;}

};

#endif //_PLAN_H_