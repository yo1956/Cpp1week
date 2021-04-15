#ifndef _CDATA_H_
#define _CDATA_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class CData{
private:
    //  ƒƒ“ƒo•Ï”number
    int number;
    //  ƒƒ“ƒo•Ï”comment
    string comment;
public:
    //  ‰Šú‰»
    void init();
	void setNumber(int num);
	void setComment(string str);
	int getNumber();
	string getComment();
};
 
#endif // _CDATA_H_