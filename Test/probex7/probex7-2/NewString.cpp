#include "NewString.h"
#include <algorithm>
 
//  �R���X�g���N�^
NewString::NewString()
{
    m_value = "";
}
//  �l��������R���X�g���N�^�@�i�����񂩂�j
NewString::NewString(string value)
{
    m_value = value;
}
//  �l��������R���X�g���N�^�A�i���̃N���X����)
NewString::NewString(NewString& value)
{
    m_value = value.getValue();
}
//  �l����
NewString& NewString::operator= (NewString& n)
{
    m_value = n.getValue();
    return *this;
}
//  string�Œl���擾
string NewString::getValue()
{
    return m_value;
}

//  �l���r
bool NewString::operator== (NewString& n)
{

	//if(m_value == n.getValue())
	if(stricmp(m_value.c_str(),n.getValue().c_str()) == 0)
		return true;
	else
		return false;
}