#include "Singleton.h"

Singleton::Singleton(string s)
{
	m_str = s;
}

Singleton* Singleton::getInstance(string s)
{
   //static Singleton inst; //privateなコンストラクタを呼び出す
	static Singleton* singleton = new Singleton(s);
    return singleton;
}

Singleton* Singleton::getInstance()
{
	static Singleton* singleton = new Singleton();
	singleton->setString("引数無しコンストラクタで生成");
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