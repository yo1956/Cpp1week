#include <iostream>
#include "minmax.h"
 
using namespace std;
 
int main(){
    MinMax m;
    int a = 4;
    int b = 2;
	int c = 7;
    cout << a << "‚Æ" << b << "‚Æ" << c << "‚Ì‚¤‚¿AÅ‘å‚Ì‚à‚Ì‚Í" << m.max(a,b,c) << endl;
    cout << a << "‚Æ" << b << "‚Æ" << c << "‚Ì‚¤‚¿AÅ¬‚Ì‚à‚Ì‚Í" << m.min(a,b,c) << endl;
    return 0;
}