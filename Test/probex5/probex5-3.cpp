#include <iostream>
#include <set>
#include <random>

using namespace std;

int main(){
	set<int> num;

	random_device rnd;
	mt19937 mt(rnd());
	uniform_int_distribution<> rand(1,10);
	int x = 0;

	cout << "—”:";
	for(int i=0; i < 9; i++){
		x = rand(mt);
		cout << x << " ";
		num.insert(x);
	}
	cout << endl;

	set<int>::iterator itr;
	for(itr = num.begin(); itr != num.end(); itr++){
		cout << *itr << " ";
	}
	cout << endl;
}