#include "PC.h"

void PC::powerOn()
{
	cpu->activate();
	memory->activate();
}


void PC::setCPU(CPU* c)
{
	cpu = c;
}

void PC::setMemory(Memory* m)
{
	memory = m;
}