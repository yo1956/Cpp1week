#include "number.h"
#include <iostream>

using namespace std;
 
Number::Number() : a(0), b(0)
{
	//cout << "Number�I�u�W�F�N�g�쐬�Aa,b��0�ŏ�����" << endl;
}

//  ��̐��l��ݒ�
void Number::setNumbers(int n1, int n2)
{
    a = n1;
    b = n2;
}
int Number::getAdd()
{
    return a + b;
}