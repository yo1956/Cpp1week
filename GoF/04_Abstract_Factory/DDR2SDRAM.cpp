#include "DDR2SDRAM.h"

DDR2SDRAM::DDR2SDRAM()
{
	capacity = 2;
}


void DDR2SDRAM::activate()
{
	cout << "DDR2 SDRAM: " << capacity << endl;
}