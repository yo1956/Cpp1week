#include "Singleton.h"

Singleton::Singleton(string s)
{
	m_str = s;
}

Singleton* Singleton::getInstance(string s)
{
   //static Singleton inst; //private�ȃR���X�g���N�^���Ăяo��
	static Singleton* singleton = new Singleton(s);
    return singleton;
}

Singleton* Singleton::getInstance()
{
	static Singleton* singleton = new Singleton();
	singleton->setString("���������R���X�g���N�^�Ő���");
	return singleton;
}

string Singleton::getString()
{
    return m_str;
}

void Singleton::setString(string s)
{
	m_str = s;
}