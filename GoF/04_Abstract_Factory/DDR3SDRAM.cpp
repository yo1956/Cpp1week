#include "DDR3SDRAM.h"

DDR3SDRAM::DDR3SDRAM()
{
	capacity = 4;
}

void DDR3SDRAM::activate()
{
	cout << "DDR3 SDRAM: " << capacity << endl;
}