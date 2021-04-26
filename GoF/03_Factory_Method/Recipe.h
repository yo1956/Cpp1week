#ifndef _RECIPE_H_
#define _RECIPE_H_


#include <iostream>
using namespace std;

class Recipe
{
public:
	//virtual ~Recipe() = 0;

	virtual void cook() = 0;
	
};

//Recipe::~Recipe(){}

#endif //_RECIPE_H_