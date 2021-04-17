#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H

#include "airplane.h"
 
#include <iostream>
#include <string>
 
using namespace std;
 
//  戦闘機クラス
class FighterAircraft: public AirPlane{

public:
    //  コンストラクタ
    FighterAircraft();
    
    //  飛行する
    void fly();
    //  戦闘する
    void fight();
};
 
#endif // _FIGHTERAIRCRAFT_H_