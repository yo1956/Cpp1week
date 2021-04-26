#ifndef _DDR2SDRAM_H_
#define _DDR2SDRAM_H_

#include "Memory.h"

class DDR2SDRAM : public Memory
{

public:
	DDR2SDRAM();

	void activate();
	
};


#endif 