#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(){
	map<char, string> m;
	string str;

	m['0'] = "�Z";
	m['1'] = "��";
	m['2'] = "��";
	m['3'] = "�O";
	m['4'] = "�l";
	m['5'] = "��";
	m['6'] = "�Z";
	m['7'] = "��";
	m['8'] = "��";
	m['9'] = "��";
	

	cout << "�����̒l����͂��Ă��������F";
	getline(cin, str);

	//���̓`�F�b�N
	//string check[] = {"0","1","2","3","4","5","6","7","8","9"};
	for(int i=0; i < str.size(); i++){
		if(isdigit(str[i]) == false){
			cout << "�����̒l����͂��Ă��������B" << endl;
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
		cout << m[str[i]]; 

		if(comma_index == (i % 3) && i < str.size()-1)
			cout << ",";
	}
	
}