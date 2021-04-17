#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int main(){
	map<char, string> m;
	queue<string> q;
	string str;

	m['0'] = "〇";
	m['1'] = "一";
	m['2'] = "二";
	m['3'] = "三";
	m['4'] = "四";
	m['5'] = "五";
	m['6'] = "六";
	m['7'] = "七";
	m['8'] = "八";
	m['9'] = "九";
	

	cout << "整数の値を入力してください：";
	getline(cin, str);

	//入力チェック
	for(int i=0; i < str.size(); i++){
		if(isdigit(str[i]) == false){
			cout << "整数の値を入力してください。" << endl;
			return 0;
		}
	}

	int comma_index = 0;
	if(str.size() % 3 == 1)
		comma_index = 0;
	else if(str.size() % 3 == 2)
		comma_index = 1;
	else
		comma_index = 2;

	for(int i=0; i < str.size(); i++){
		q.push(m[str[i]]); 

		if(comma_index == (i % 3) && i < str.size()-1)
			q.push(",");
	}

	cout << "変換結果：";
	while(!q.empty()){
		cout << q.front();
		q.pop();
	}
	cout << endl;
}