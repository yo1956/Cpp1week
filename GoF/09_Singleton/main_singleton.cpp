#include "Singleton.h"
#include <iostream>

int main()
{
	cout << Singleton::getInstance("singleton1")->getString() << endl;

	cout << Singleton::getInstance("singleton2")->getString() << endl;
	cout << Singleton::getInstance("singleton3")->getString() << endl;

	cout << Singleton::getInstance()->getString() << endl;

	cout << "�C���X�^���X���ŏ��ɍ��������������̂�singleton1�����o�Ȃ��͗l" << endl;
}