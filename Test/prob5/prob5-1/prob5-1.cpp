#include <iostream>
#include "function.h"
 
using namespace std;
 
int main(){
    int m = 3, n = 1;
    cout << m << "��" << n << "�̂����A�ő�̂��̂�" << Function::max(m, n) << endl;
    cout << m << "��" << n << "�̂����A�ő�̂��̂�" << Function::min(m, n) << endl;
    return 0;
}