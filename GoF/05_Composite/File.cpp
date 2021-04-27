#include "File.h"

File::File(char* c)
{
	this->setName(c);
}


void File::open()
{
	cout << "This is a file named: " << this->getName() << endl;
}