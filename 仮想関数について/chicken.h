#ifndef _CHICKEN_H_
#define _CHICKEN_H_
 
#include "bird.h"
 
//  �j���g���N���X
class CChicken : public CBird{
public:
    //  �u���v�֐��i���z�֐��j
    void sing(){ cout << "�R�P�R�b�R�[" << endl; }
    //  �u��ԁv�֐�
    void fly(){ cout << "�ɂ�Ƃ�͔�ׂ܂���" << endl; }
};
 
#endif // _CHICKEN_H_