#ifndef _CROW_H_
#define _CROW_H_
 
#include "bird.h"
 
//  �J���X�N���X
class CCrow : public CBird{
public:
    //  �u���v�֐��i���z�֐��j
    void sing(){ cout << "�J�[�J�[" << endl; }
    //  �u��ԁv�֐�
    void fly(){ cout << "�J���X����т܂�" << endl; }

	void asaru(){cout << "�S�~��������" << endl;}
};
 
#endif // _CROW_H_