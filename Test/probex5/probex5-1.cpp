#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	map<string, string> m;
	string s[] = {"cat", "dog", "bird", "tiger"};
	string str;

	m[s[0]] = "�L";
	m[s[1]] = "��";
	m[s[2]] = "��";
	m[s[3]] = "�g��";

	cout << "�p��œ����̖��O����͂��Ă��������F";
	getline(cin, str);

	for(int i=0; i < 3; i++){
		if(str == s[i])
			break;
		else if(i == 2 && str != s[i]){
			cout << "�Ή�����f�[�^�͓o�^����Ă��܂���B" << endl;
			return 0;
		}
	}
	cout << "�u" << m[str] << "�v�ł��B" << endl;
}