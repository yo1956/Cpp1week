#ifndef _DO_H_
#define _DO_H_

#include "work_step.h"

class Do : public WorkStep
{
public:
	void exec(){cout << "Do" << endl;}

};

#endif