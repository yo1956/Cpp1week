#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H

#include "airplane.h"
 
#include <iostream>
#include <string>
 
using namespace std;
 
//  �퓬�@�N���X
class FighterAircraft: public AirPlane{

public:
    //  �R���X�g���N�^
    FighterAircraft();
    
    //  ��s����
    void fly();
    //  �퓬����
    void fight();
};
 
#endif // _FIGHTERAIRCRAFT_H_