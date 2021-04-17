#include "pitcher.h"
#include "catcher.h"
#include "fielder.h"
//using namespace std;
 
int main(){
    //  �싅�I��̔z��쐬
    BaseballPlayer* players[9];
    players[0] = new Fielder("�R�c",8);
    players[1] = new Fielder("����",16);
    players[2] = new Fielder("�S���X",16);
    players[3] = new Fielder("����",6);
    players[4] = new Fielder("�t����",32);
    players[5] = new Fielder("�x�c",5);
    players[6] = new Catcher("����",54);
    players[7] = new Fielder("�g�[�}�X",11);
    players[8] = new Pitcher("�ē�",34);
    int i;
    for(i = 0; i < 9; i++){
        cout << "---------------------------------------------" << endl;
        cout << "���O:" << players[i]->getName() << endl;
        cout << "�w�ԍ�:" << players[i]->getNumber() << endl;
        cout << "���:" << players[i]->getKind() << endl;
    }   
    //  �C���X�^���X�̏���
    for(i = 0; i < 9; i++){
        delete players[i];
    }
    return 0;
}