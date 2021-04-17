#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <string>
using namespace std;

class AirPlane{
private:
	string m_type;

public:
	//AirPlane(); //コンストラクタ

	/*string getType();
	void setType(string s);*/

	string AirPlane::getType(){return m_type;}
	void AirPlane::setType(string s){m_type = s;}

	virtual void fly() = 0;

};

////タイプの取得
//string AirPlane::getType()
//{
//    return m_type;
//}
//
////タイプのセット
//void AirPlane::setType(string s){
//	m_type = s;
//}

#endif //_AIRPLANE_H_
