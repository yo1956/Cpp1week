#ifndef _FILE_H_
#define _FILE_H_

#include "Element.h"

class File : public Element
{
public:
	File(){}
	File(char* c);

	void open();

};

#endif