#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> num;
	int x = 0;
	while(1){
		cout << "正の整数を入力：";
		cin >> x;

		if(x == -1)
			break;

		num.push_back(x);
	}

	cout << "最大値：";
	cout << *max_element(num.begin(), num.end());
	cout << endl;

	cout << "最小値：";
	cout << *min_element(num.begin(), num.end());
	cout << endl;
}