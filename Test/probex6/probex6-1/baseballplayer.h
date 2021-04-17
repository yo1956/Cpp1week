#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_
 
#include <iostream>
#include <string>
using namespace std;
 
class BaseballPlayer{
protected:
    //  �w�ԍ�
    int m_number;
    //  �v���C���[�̎��
    string m_kind;
    //  ���O
    string m_name;
public:
    //  �w�ԍ��̎擾
	int getNumber(){return m_number;}
    //  ��ނ̎擾
	string getKind(){return m_kind;}
    //  ���O�̎擾
	string getName(){return m_name;}
    //  �v���C�i�������֐�)
    virtual void play()=0;
};
 
#endif // _BASEBALLPLAYER_H_