#include <iostream>
 
#include "counter.h"
 
using namespace std;
 
int main(){
    Counter c1, c2;
    c1.count();
    c2.count();
    c2.count();
    c2.reset();
    c1.count();
    c1.count();
    c2.count();
    cout << "c1�̃J�E���g���F" << c1.getCount() << endl;
    cout << "c2�̃J�E���g���F" << c2.getCount() << endl;
    cout << "�g�[�^���̃J�E���g��:" << Counter::getTotalCount() << endl;
    return 0;
}