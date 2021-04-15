#include <iostream>
#include "number.h"
 
using namespace std;
 
int main(){
    Number* pN = nullptr;
    pN = new Number();
    pN->setNumbers(1, 2);
    cout << pN->getAdd() << endl;
	delete pN;
    return 0;
}