#include "calculation.h"
#include <iostream>

using namespace std;

void Calculation::setNumber1(int n)
{
	m_number1 = n;
}

void Calculation::setNumber2(int n)
{
	m_number2 = n;
}

int Calculation::getNumber1()
{
	return m_number1;
}

int Calculation::getNumber2()
{
	return m_number2;
}

int Calculation::add()
{
	return m_number1 + m_number2;
}

int Calculation::sub()
{
	return m_number1 - m_number2;
}
