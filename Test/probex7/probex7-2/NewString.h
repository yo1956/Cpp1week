#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class NewString{
private:
    //  ������
    string m_value;
public:
    //  �R���X�g���N�^
    NewString();
    //  �l��������R���X�g���N�^�@�i�����񂩂�j
    NewString(string value);
    //  �l��������R���X�g���N�^�A�i���̃N���X����)
    NewString(NewString& value);
    //  �l����
    NewString& operator= (NewString& n);
    //  string�Œl���擾
    string getValue();

	//  �l���r
    bool operator== (NewString& n);
};

#endif //_NEWSTRING_H_