#include <iostream>
#include "data.h"
 
using namespace std;
 
int main(){
    CData d;
    d.init();   //  ƒpƒ‰ƒ[ƒ^‚ğ‰Šú‰»
    d.setNumber(100);
    d.setComment("Programming C++");
    cout << "number = " << d.getNumber() << " comment = " << d.getComment() << endl;
    return 0;
}