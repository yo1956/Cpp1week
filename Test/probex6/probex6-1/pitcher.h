#ifndef _PITCHER_H_
#define _PITCHER_H_
 
#include "BaseballPlayer.h"

using namespace std;
 
class Pitcher : public BaseballPlayer{
public:
    //  �R���X�g���N�^
    Pitcher(string name,int number);
    //  �s�b�`���[���v���C����
    void play();
};
 
#endif //_PITCHER_H_