#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	map<string, string> m;
	string s[] = {"cat", "dog", "bird", "tiger"};
	string str;

	m[s[0]] = "猫";
	m[s[1]] = "犬";
	m[s[2]] = "鳥";
	m[s[3]] = "トラ";

	cout << "英語で動物の名前を入力してください：";
	getline(cin, str);

	for(int i=0; i < 3; i++){
		if(str == s[i])
			break;
		else if(i == 2 && str != s[i]){
			cout << "対応するデータは登録されていません。" << endl;
			return 0;
		}
	}
	cout << "「" << m[str] << "」です。" << endl;
}