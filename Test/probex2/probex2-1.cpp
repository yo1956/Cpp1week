#include "foo.h"
#include "bar.h"
#include <iostream>
 
using namespace std;
 
void main(){
    Foo* pFoo;
    Bar* pBar;

	pFoo = new Foo();
	pBar = new Bar();

	pFoo->hoge();
	pBar->func2();
	pFoo->fuga(pBar);
	pFoo->hoge();
}