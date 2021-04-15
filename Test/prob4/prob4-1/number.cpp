#include "number.h"
#include <iostream>

using namespace std;
 
Number::Number() : a(0), b(0)
{
	//cout << "Numberオブジェクト作成、a,bを0で初期化" << endl;
}

//  二つの数値を設定
void Number::setNumbers(int n1, int n2)
{
    a = n1;
    b = n2;
}
int Number::getAdd()
{
    return a + b;
}