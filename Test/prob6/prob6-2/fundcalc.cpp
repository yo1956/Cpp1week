#include "fundcalc.h"
 
FundCalc::FundCalc() : m_number1(0), m_number2(0)
{
}
//  ��ڂ̐���ݒ�
void FundCalc::setNumber1(double number)
{
    m_number1 = number;
}
//  ��ڂ̐���ݒ�
void FundCalc::setNumber2(double number)
{
    m_number2 = number;
}
//  ��ڂ̐���ݒ�
double FundCalc::getNumber1()
{
    return m_number1;
}
//  ��ڂ̐���ݒ�
double FundCalc::getNumber2()
{
    return m_number2;
}
//  ��̐��̘a���o��
double FundCalc::add()
{
    return m_number1 + m_number2;
}
//  ��̐��̍����o��
double FundCalc::sub()
{
    return m_number1 - m_number2;
}