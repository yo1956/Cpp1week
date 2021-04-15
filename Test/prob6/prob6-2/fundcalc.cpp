#include "fundcalc.h"
 
FundCalc::FundCalc() : m_number1(0), m_number2(0)
{
}
//  ˆê‚Â–Ú‚Ì”‚ğİ’è
void FundCalc::setNumber1(double number)
{
    m_number1 = number;
}
//  “ñ‚Â–Ú‚Ì”‚ğİ’è
void FundCalc::setNumber2(double number)
{
    m_number2 = number;
}
//  ˆê‚Â–Ú‚Ì”‚ğİ’è
double FundCalc::getNumber1()
{
    return m_number1;
}
//  “ñ‚Â–Ú‚Ì”‚ğİ’è
double FundCalc::getNumber2()
{
    return m_number2;
}
//  “ñ‚Â‚Ì”‚Ì˜a‚ğo—Í
double FundCalc::add()
{
    return m_number1 + m_number2;
}
//  “ñ‚Â‚Ì”‚Ì·‚ğo—Í
double FundCalc::sub()
{
    return m_number1 - m_number2;
}