#include <iostream>
#include <string>
#include "collection.h"
 
using namespace std;
 
int main(){
    //  �z��ϐ��̒�`
	int array[] = { 1, 5, 4, 2, 3 };

	collection<int> *c = new collection<int>(array, 5);
	c->showArray();
	cout << "�ő�l�F" << c->getMax() << endl;
	cout << "�ŏ��l�F" << c->getMin() << endl;
	delete c;

	/*double array[] = { 1.2, 3.5, 8.1, 4.9, 2.0, 2.2 };

	collection<double>* c = new collection<double>(array, 6);
	c->showArray();
	cout << "�ő�l�F" << c->getMax() << endl;
	cout << "�ŏ��l�F" << c->getMin() << endl;
	delete c;*/

	/*
    string str = "abcdef";
    collection<string> c = new collection<string>(str,6);
    c->showArray();
    cout << "�ő�l : " << c->getMax() << endl;
    cout << "�ŏ��l : " << c->getMin() << endl;
    delete c;
	*/

    return 0;
}