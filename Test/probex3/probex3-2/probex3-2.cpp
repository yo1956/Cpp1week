#include <iostream>
#include <string>
#include "collection.h"
 
using namespace std;
 
int main(){
    //  配列変数の定義
	int array[] = { 1, 5, 4, 2, 3 };

	collection<int> *c = new collection<int>(array, 5);
	c->showArray();
	cout << "最大値：" << c->getMax() << endl;
	cout << "最小値：" << c->getMin() << endl;
	delete c;

	/*double array[] = { 1.2, 3.5, 8.1, 4.9, 2.0, 2.2 };

	collection<double>* c = new collection<double>(array, 6);
	c->showArray();
	cout << "最大値：" << c->getMax() << endl;
	cout << "最小値：" << c->getMin() << endl;
	delete c;*/

	/*
    string str = "abcdef";
    collection<string> c = new collection<string>(str,6);
    c->showArray();
    cout << "最大値 : " << c->getMax() << endl;
    cout << "最小値 : " << c->getMin() << endl;
    delete c;
	*/

    return 0;
}