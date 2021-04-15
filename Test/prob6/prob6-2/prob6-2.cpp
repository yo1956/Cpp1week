#include <iostream>
#include "newcalc.h"

using namespace std;
 
int main(){
    NewCalc n;
    n.setNumber1(10);   //  ˆê‚Â–Ú‚Ì”‚ğİ’è
    n.setNumber2(2);    //  “ñ‚Â–Ú‚Ì”‚ğİ’è
    cout << n.getNumber1() << " + " << n.getNumber2() << " = " << n.add() << endl;
    cout << n.getNumber1() << " - " << n.getNumber2() << " = " << n.sub() << endl;
    cout << n.getNumber1() << " * " << n.getNumber2() << " = " << n.mul() << endl;
    cout << n.getNumber1() << " / " << n.getNumber2() << " = " << n.div() << endl;
 
    return 0;
}