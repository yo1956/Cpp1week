#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> even, odd;
	int x = 0;
	while(1){
		cout << "³‚Ì®”‚ð“ü—ÍF";
		cin >> x;

		if(x == -1)
			break;

		if(x % 2 == 0)
			even.push_back(x);
		else
			odd.push_back(x);
	}

	cout << "‹ô”F";
	for(int i=0; i < even.size(); i++){
		cout << even[i] << " ";
	}
	cout << endl;

	cout << "Šï”F";
	for(int i=0; i < odd.size(); i++){
		cout << odd[i] << " ";
	}
	cout << endl;
}