#ifndef _FIELDER_H_
#define _FIELDER_H_
 
#include "BaseballPlayer.h"
using namespace std;
 
class Fielder : public BaseballPlayer{
public:
    //  �R���X�g���N�^
    Fielder(string name,int number);
    //  ��肪�v���C����
    void play();
};
 
#endif // _FIELDER_H_