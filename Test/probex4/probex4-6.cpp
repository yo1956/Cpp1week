#include <iostream>
#include <list>

using namespace std;

int main(){
	list<int> num;
	int x;
	bool flag = false;
	list<int>::iterator itr = num.begin();
	while(1){
		cout << "正の整数を入力：";
		cin >> x;

		if(x == -1)
			break;

		//一番最初だけpush_back
		if(num.empty() == true){
			num.push_back(x);
			cout << "入力された数：" << num.front() << endl;
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

		cout << "入力された数：";
		for(itr = num.begin(); itr != num.end(); itr++){
			cout << *itr << " ";
		}
		cout << endl;

	}

	/*while(1){
		cout << "正の整数を入力：";
		cin >> x;

		if(x == -1)
			break;

		num.push_back(x);
		if(x < num.back())
			num.sort();

		cout << "入力された数：";
		for(list<int>::iterator itr = num.begin(); itr != num.end(); itr++){
			cout << *itr << " ";
		}

	}*/
	
}