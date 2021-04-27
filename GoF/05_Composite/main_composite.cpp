#include "Element.h"
#include "File.h"
#include "Folder.h"

int main()
{

	char* c1 = "folder1";
	char* c2 = "folder2";
	char* c3 = "folder3";
	char* c4 = "fileA";
	char* c5 = "fileB";
	char* c6 = "fileC";

	Folder* f1 = new Folder(c1);
	Folder* f2 = new Folder(c2);

	f1->addElement(f2);

	File* fA = new File(c4);

	f2->addElement(fA);

	Folder* f3 = new Folder(c3);

	f2->addElement(f3);

	File* fB = new File(c5);

	f3->addElement(fB);

	File* fC = new File(c6);

	f3->addElement(fC);

	f1->open();
	f2->open();

	fA->open();

	f3->open();

	delete f1, f2, f3, fA, fB, fC;


}