#include <iostream>
//#include "airplane.h"
#include "fighteraircraft.h"
#include "passengerplane.h"
 
using namespace std;
 
int main(){
    //  戦闘機クラスのインスタンスの生成
    FighterAircraft* fighter = new FighterAircraft();
    PassengerPlane* airlinear = new PassengerPlane();
    //  戦闘機クラスの処理
    fighter->fly();                  //  飛行する
    fighter->fight();                //  戦闘する
    //  旅客機クラスの処理
    airlinear->fly();                //  飛行する
    airlinear->carryPassengers();    //  乗客を運ぶ
    //  delete処理
    delete fighter;
    delete airlinear;
}