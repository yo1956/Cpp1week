#ifndef _WORK_SEQUENCE_H_
#define _WORK_SEQUENCE_H_

#include "work_step.h"

#include <iostream>
using namespace std;

#include <vector>


class WorkSequence
{
private:
	vector<WorkStep*> work_step;

public:
	void addStep(WorkStep* ws){
		work_step.push_back(ws);
	}

	void exec(){
		for(unsigned int i=0; i < work_step.size(); ++i){
			work_step[i]->exec();
		}

	}

};

#endif