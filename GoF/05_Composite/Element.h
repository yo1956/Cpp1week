#ifndef _ELEMENT_H_
#define _ELEMENT_H_

#include <iostream>
using namespace std;

//子クラスのインスタンス生成時に親クラスのコンストラクタに引数渡せる？
//Elementは抽象クラスだから不可？

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