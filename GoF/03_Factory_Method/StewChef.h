#ifndef _STEWCHEF_H_
#define _STEWCHEF_H_

#include "Person.h"
#include "StewRecipe.h"	

class StewChef: public Person
{
//private:
protected:
	StewRecipe* stew;

public:
	void createRecipe();
	void cook();
	
};

#endif