#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> num;
	int x = 0;
	while(1){
		cout << "���̐�������́F";
		cin >> x;

		if(x == -1)
			break;

		num.push_back(x);
	}

	cout << "�ő�l�F";
	cout << *max_element(num.begin(), num.end());
	cout << endl;

	cout << "�ŏ��l�F";
	cout << *min_element(num.begin(), num.end());
	cout << endl;
}