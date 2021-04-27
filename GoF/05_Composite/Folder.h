#ifndef _FOLDER_H_
#define _FOLDER_H_

#include "Element.h"
#include <vector>

class Folder : public Element
{
private:
	vector<Element*> element;

public:
	Folder(){}
	Folder(char* c);
	
	void open();
	void addElement(Element* elem);

};

#endif