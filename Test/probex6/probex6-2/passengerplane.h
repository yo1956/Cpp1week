#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_
 
#include <iostream>
#include <string>
 
#include "airplane.h"

using namespace std;
 
//  ���q�@�N���X
class PassengerPlane: public AirPlane{

public:
    //  �R���X�g���N�^
    PassengerPlane();
    
    //  ��s����
    void fly();
    //  ��q���^��
    void carryPassengers();
};
 
#endif // _PASSENGERPLANE_H_