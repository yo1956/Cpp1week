#include "Singleton.h"
#include <iostream>

int main()
{
	cout << Singleton::getInstance("singleton1")->getString() << endl;

	cout << Singleton::getInstance("singleton2")->getString() << endl;
	cout << Singleton::getInstance("singleton3")->getString() << endl;

	cout << Singleton::getInstance()->getString() << endl;

	cout << "インスタンスが最初に作った一つしか無いのでsingleton1しか出ない模様" << endl;
}