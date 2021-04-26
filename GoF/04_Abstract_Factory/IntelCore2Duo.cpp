#include "IntelCore2Duo.h"

IntelCore2Duo::IntelCore2Duo()
{
	clock = 2.5;
}

void IntelCore2Duo::activate()
{
	cout << "Intel Core 2 Duo: " << clock << endl;
}