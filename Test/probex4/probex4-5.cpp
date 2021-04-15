#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> num;
	int x;
	while(1){
		cout << "³‚Ì®”‚ğ“ü—ÍF";
		cin >> x;

		if(x == -1)
			break;

		num.push_back(x);
	}
	cout << endl;

	num.remove(2);

	for(list<int>::iterator itr = num.begin(); itr != num.end(); itr++){
			cout << *itr << " ";
	}
	
}