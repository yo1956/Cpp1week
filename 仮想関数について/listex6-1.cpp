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
    
	b1->sing(); //カーカー
    b1->fly();  //鳥が飛びます

	//b1->asaru();
    
	b2->sing(); //コケコッコー
    b2->fly();  //鳥が飛びます



	//CCrow b1;
	//CChicken b2;

	//b1.sing(); //カーカー
	//b1.fly();  //カラスが飛びます

	//b2.sing(); //コケコッコー
	//b2.fly();  //にわとりは飛べません

    return 0;
}