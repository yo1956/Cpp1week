#include <iostream>
#include "function.h"
 
using namespace std;
 
int main(){
    int m = 3, n = 1;
    cout << m << "‚Æ" << n << "‚Ì‚¤‚¿AÅ‘å‚Ì‚à‚Ì‚Í" << Function::max(m, n) << endl;
    cout << m << "‚Æ" << n << "‚Ì‚¤‚¿AÅ‘å‚Ì‚à‚Ì‚Í" << Function::min(m, n) << endl;
    return 0;
}