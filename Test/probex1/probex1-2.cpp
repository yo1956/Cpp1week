#include <iostream>
 
using namespace std;
 
void changeNumber(int&);
 
int main(){
    int n = 5;
    cout << "�ύX�O : " << n << endl;
    changeNumber(n);
    cout << "�ύX�� : " << n << endl;
 
}
 
void changeNumber(int& n){
    n *= 2;    //  ���l
}