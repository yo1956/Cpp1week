#ifndef _DDR3SDRAM_H_
#define _DDR3SDRAM_H_

#include "Memory.h"

class DDR3SDRAM : public Memory
{

public:
	DDR3SDRAM();

	void activate();
	
};


#endif 