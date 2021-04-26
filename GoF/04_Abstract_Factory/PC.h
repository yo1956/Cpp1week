#ifndef _PC_H_
#define _PC_H_

#include <iostream>
using namespace std;

#include "CPU.h"
#include "Memory.h"

class PC
{
private:
	CPU* cpu;
	Memory* memory;

public:
	void powerOn();
	void setCPU(CPU* c);
	void setMemory(Memory* m);

	
};


#endif 