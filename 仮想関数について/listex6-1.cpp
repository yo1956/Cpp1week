#include <iostream>
#include <string>
#include "bird.h"
#include "chicken.h"
#include "crow.h"
 
using namespace std;
 
int main(){
    CBird* b1, *b2;

    b1 = new CCrow();
    b2 = new CChicken();
    
	b1->sing(); //�J�[�J�[
    b1->fly();  //������т܂�

	//b1->asaru();
    
	b2->sing(); //�R�P�R�b�R�[
    b2->fly();  //������т܂�



	//CCrow b1;
	//CChicken b2;

	//b1.sing(); //�J�[�J�[
	//b1.fly();  //�J���X����т܂�

	//b2.sing(); //�R�P�R�b�R�[
	//b2.fly();  //�ɂ�Ƃ�͔�ׂ܂���

    return 0;
}