#include <iostream>
#include "twostrings.h"
 
using namespace std;
 
int main(){
    TwoStrings s;
    s.setString1("Hello");
    s.setString2("World");
    cout << "��ڂ̕������" << s.getString1() << endl;
    cout << "��ڂ̕������" << s.getString2() << endl;
    cout << "��̕�����������������̂�" << s.getConnectedString() << endl;
    cout << "��������������̒�����" << s.getConnectedLength() << "����" << endl;
    return 0;
}