#ifndef _ELEMENT_H_
#define _ELEMENT_H_

#include <iostream>
using namespace std;

//�q�N���X�̃C���X�^���X�������ɐe�N���X�̃R���X�g���N�^�Ɉ����n����H
//Element�͒��ۃN���X������s�H

class Element
{
private:
	char* name;

public:
	/*Element(){}
	Element(char* element_name);*/

	char* getName();
	virtual void open() = 0;
	void setName(char* c);


};

#endif