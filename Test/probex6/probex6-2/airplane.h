#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <string>
using namespace std;

class AirPlane{
private:
	string m_type;

public:
	//AirPlane(); //�R���X�g���N�^

	/*string getType();
	void setType(string s);*/

	string AirPlane::getType(){return m_type;}
	void AirPlane::setType(string s){m_type = s;}

	virtual void fly() = 0;

};

////�^�C�v�̎擾
//string AirPlane::getType()
//{
//    return m_type;
//}
//
////�^�C�v�̃Z�b�g
//void AirPlane::setType(string s){
//	m_type = s;
//}

#endif //_AIRPLANE_H_
