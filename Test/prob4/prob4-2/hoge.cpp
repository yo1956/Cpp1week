#include "hoge.h"
#include <iostream>
 
using namespace std;
 
Hoge::Hoge()
{
	cout << "�R���X�g���N�^" << endl;
}

Hoge::~Hoge()
{
	cout << "�f�X�g���N�^" << endl;
}

void Hoge::foo()
{
    cout << "foo���\�b�h" << endl;
}