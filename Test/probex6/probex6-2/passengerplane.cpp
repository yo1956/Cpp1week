#include "passengerplane.h"
 
//  コンストラクタ
PassengerPlane::PassengerPlane()
{
    //m_type = "旅客機";
	setType("旅客機");
}

////  タイプの取得
//string PassengerPlane::getType()
//{
//    return m_type;
//}

//  飛行する
void PassengerPlane::fly()
{
    cout << "乗客を乗せて目的地まで飛行します。" << endl;
}
//  乗客を運ぶ
void PassengerPlane::carryPassengers()
{
    cout << "乗客を目的地まで運びます" << endl;
}