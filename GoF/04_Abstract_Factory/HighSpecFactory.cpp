#include "HighSpecFactory.h"

PC* HighSpecFactory::create()
{
	pc = new PC();

	CPU* intel = new IntelCore2Duo();
	Memory* ddr3 = new DDR3SDRAM();

	pc->setCPU(intel);
	pc->setMemory(ddr3);

	return pc;

}
