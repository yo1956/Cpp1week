#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_

#include <iostream>
using namespace std;

#include "PC.h"

class AbstractFactory
{
protected:
	PC* pc;

public:
	//virtual ~AbstractFactory() = 0 {;}

	virtual PC* create() = 0;

	
};

//AbstractFactory::~AbstractFactory(){;}


#endif 