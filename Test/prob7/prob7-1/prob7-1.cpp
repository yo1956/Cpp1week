#include <iostream>
#include "counter.h"
 
using namespace std;
 
int main(){
    //  �J�E���^�𐶐�
    Counter* pC = new Counter();
    pC->count(); //  �P��J�E���g
    pC->count(); //  �P��J�E���g
    cout << "��:" << pC->getCount() << "��" << endl;
    pC->count(4);    //  �S��J�E���g
    cout << "��:" << pC->getCount() << "��" << endl;
    //  �J�E���^�����Z�b�g
    pC->reset();
    cout << "��:" << pC->getCount() << "��" << endl;
    //  �J�E���^������
    delete pC;
    return 0;
}