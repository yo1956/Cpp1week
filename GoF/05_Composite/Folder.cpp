#include "Folder.h"

Folder::Folder(char* c)
{
	this->setName(c);
}

void Folder::open()
{
	cout << "This is a folder named: " << this->getName() << endl;

	for(int i = 0; i < (int)element.size(); ++i)
		cout << element[i]->getName() << endl;
}

void Folder::addElement(Element* elem)
{
	element.push_back(elem);
}