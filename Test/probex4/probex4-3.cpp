#include <iostream>
#include <vector>

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

	bool flag = false;
	for(int i=0; i < 10; i++){
		cout << "��̈ʂ�" << i << "�F";
		for(int j=0; j < num.size(); j++){
			if(num[j] % 10 == i){
				cout << num[j] << " ";
				flag = true;
			}
		}

		if(flag == false)
			cout << "�Ȃ�";

		cout << endl;

		flag = false;
	}

	
}