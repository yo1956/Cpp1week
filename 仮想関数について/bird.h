#ifndef _BIRD_H_
#define _BIRD_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class CBird{
public:
    //  �u���v�֐��i���z�֐��j
    virtual void sing(){ cout << "�������܂�" << endl; }
    //  �u��ԁv�֐�
    void fly(){ cout << "������т܂�" << endl; }
};
 
#endif // _BIRD_H_