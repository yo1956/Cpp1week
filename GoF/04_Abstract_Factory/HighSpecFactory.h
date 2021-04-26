#ifndef _HIGHSPECFACTORY_H_
#define _HIGHSPECFACTORY_H_

#include "AbstractFactory.h"
#include "PC.h"
#include "IntelCore2Duo.h"
#include "DDR3SDRAM.h"

class HighSpecFactory : public AbstractFactory
{


public:
	PC* create();
	
	
};


#endif 