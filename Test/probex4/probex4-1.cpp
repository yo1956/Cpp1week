#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> even, odd;
	int x = 0;
	while(1){
		cout << "正の整数を入力：";
		cin >> x;

		if(x == -1)
			break;

		if(x % 2 == 0)
			even.push_back(x);
		else
			odd.push_back(x);
	}

	cout << "偶数：";
	for(int i=0; i < even.size(); i++){
		cout << even[i] << " ";
	}
	cout << endl;

	cout << "奇数：";
	for(int i=0; i < odd.size(); i++){
		cout << odd[i] << " ";
	}
	cout << endl;
}