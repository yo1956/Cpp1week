#include "MidRangeFactory.h"

PC* MidRangeFactory::create()
{
	pc = new PC();

	CPU* amd = new AMDAthlonX2();
	Memory* ddr2 = new DDR2SDRAM();

	pc->setCPU(amd);
	pc->setMemory(ddr2);

	return pc;

}
