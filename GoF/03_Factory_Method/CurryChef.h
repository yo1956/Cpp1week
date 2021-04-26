#ifndef _CURRYCHEF_H_
#define _CURRYCHEF_H_

#include "Person.h"
#include "CurryRecipe.h"

class CurryChef: public Person
{
//private:
protected:
	CurryRecipe* curry;

public:
	void createRecipe();
	void cook();
	
};

#endif