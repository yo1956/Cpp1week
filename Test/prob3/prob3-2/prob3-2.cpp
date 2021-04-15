#include <iostream>
#include "twostrings.h"
 
using namespace std;
 
int main(){
    TwoStrings s;
    s.setString1("Hello");
    s.setString2("World");
    cout << "ˆê‚Â–Ú‚Ì•¶Žš—ñ‚Í" << s.getString1() << endl;
    cout << "“ñ‚Â–Ú‚Ì•¶Žš—ñ‚Í" << s.getString2() << endl;
    cout << "“ñ‚Â‚Ì•¶Žš—ñ‚ð‡¬‚µ‚½‚à‚Ì‚Í" << s.getConnectedString() << endl;
    cout << "‡¬‚µ‚½•¶Žš—ñ‚Ì’·‚³‚Í" << s.getConnectedLength() << "•¶Žš" << endl;
    return 0;
}