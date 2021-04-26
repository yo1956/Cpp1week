#include "AbstractFactory.h"
#include "HighSpecFactory.h"
#include "MidRangeFactory.h"
#include "PC.h"
#include "CPU.h"
#include "Memory.h"
#include "IntelCore2Duo.h"
#include "AMDAthlonX2.h"
#include "DDR2SDRAM.h"
#include "DDR3SDRAM.h"

int main()
{
	AbstractFactory* hsf = new HighSpecFactory();
	PC* pc_h = hsf->create();
	pc_h->powerOn();

	AbstractFactory* mrf = new MidRangeFactory();
	PC* pc_m = mrf->create();
	pc_m->powerOn();

	delete hsf, mrf, pc_h, pc_m;

}