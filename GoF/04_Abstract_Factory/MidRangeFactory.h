#ifndef _MIDRANGEFACTORY_H_
#define _MIDRANGEFACTORY_H_

#include "AbstractFactory.h"
#include "PC.h"
#include "AMDAthlonX2.h"
#include "DDR2SDRAM.h"

class MidRangeFactory : public AbstractFactory
{


public:
	PC* create();
	
	
};


#endif 