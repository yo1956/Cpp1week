#include <iostream>
#include "fighter.h"
 
using namespace std;
 
int main(){
    Fighter f;  //  �퓬�@�N���X
    Airplane a; //  ��s�@�N���X
    //  ��s�@����s����
    a.fly();
    //  �퓬�@����s����
    f.fly();
    //  �퓬�@���퓬����
    f.fight();
    return 0;
}