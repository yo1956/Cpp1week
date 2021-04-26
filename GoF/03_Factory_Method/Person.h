#ifndef _PERSON_H_
#define _PERSON_H_

//問題文が紛らわしくてPersonをインターフェースとして実装してしまった
//のでFactoryMethodとは少し違うことをしてしまっていると思う

#include <iostream>
using namespace std;

class Person
{

public:
	//virtual ~Person() = 0;

	virtual void createRecipe() = 0;
	virtual void cook() = 0;
	
};

//Person::~Person(){}

#endif //_PERSON_H_