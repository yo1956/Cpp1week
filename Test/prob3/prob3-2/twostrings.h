#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class TwoStrings{
private:
    //  ��ڂ̕�����
    string m_string1;
    //  ��ڂ̕�����
    string m_string2;
public:
    //  ��ڂ̕������ݒ�
    void setString1(string s);
    //  ��ڂ̕������ݒ�
    void setString2(string s);
    //  ��ڂ̕�������擾
    string getString1();
    //  ��ڂ̕�������擾
    string getString2();
    //  ��̕�������Ȃ������̂��擾
    string getConnectedString();
    //  getConnectedString()�œ����镶����̒������擾
    int getConnectedLength();
};
 
#endif // _TWOSTRINGS_H_