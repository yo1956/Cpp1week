#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> num;
	int x;
	bool flag = false;
	list<int>::iterator itr = num.begin();
	while(1){
		cout << "���̐�������́F";
		cin >> x;

		if(x == -1)
			break;

		//��ԍŏ�����push_back
		if(num.empty() == true){
			num.push_back(x);
			cout << "���͂��ꂽ���F" << num.front() << endl;
			continue;
		}

		flag = false;
		for(itr = num.begin(); itr != num.end(); itr++){
			if(x >= *itr)
				flag = true;

			if(flag == true && x < *itr || x <= num.front())
				break;
		}

		num.insert(itr, x);

		cout << "���͂��ꂽ���F";
		for(itr = num.begin(); itr != num.end(); itr++){
			cout << *itr << " ";
		}
		cout << endl;

	}

	/*while(1){
		cout << "���̐�������́F";
		cin >> x;

		if(x == -1)
			break;

		num.push_back(x);
		if(x < num.back())
			num.sort();

		cout << "���͂��ꂽ���F";
		for(list<int>::iterator itr = num.begin(); itr != num.end(); itr++){
			cout << *itr << " ";
		}

	}*/
	
}