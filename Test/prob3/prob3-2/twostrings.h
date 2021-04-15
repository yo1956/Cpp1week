#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class TwoStrings{
private:
    //  ˆê‚Â–Ú‚Ì•¶š—ñ
    string m_string1;
    //  “ñ‚Â–Ú‚Ì•¶š—ñ
    string m_string2;
public:
    //  ˆê‚Â–Ú‚Ì•¶š—ñ‚ğİ’è
    void setString1(string s);
    //  “ñ‚Â–Ú‚Ì•¶š—ñ‚ğİ’è
    void setString2(string s);
    //  ˆê‚Â–Ú‚Ì•¶š—ñ‚ğæ“¾
    string getString1();
    //  “ñ‚Â–Ú‚Ì•¶š—ñ‚ğæ“¾
    string getString2();
    //  “ñ‚Â‚Ì•¶š—ñ‚ğ‚Â‚È‚¢‚¾‚à‚Ì‚ğæ“¾
    string getConnectedString();
    //  getConnectedString()‚Å“¾‚ç‚ê‚é•¶š—ñ‚Ì’·‚³‚ğæ“¾
    int getConnectedLength();
};
 
#endif // _TWOSTRINGS_H_