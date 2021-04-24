#ifndef _PERSON_H_
#define _PERSON_H_

#include "work_sequence.h"

#include <iostream>
using namespace std;

class Person
{
private:
	WorkSequence* work_sequence;


public:
	void addSequence(WorkSequence* ws){
		work_sequence = ws;
	}

	void work(){
		work_sequence->exec();
	}

	
};

#endif //_PERSON_H_