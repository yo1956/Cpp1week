#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	string s;

	cout << "�p�P�����́F";
	getline(cin, s);

	set<char> st;
	for(int i=0; i < s.size(); i++){
		st.insert(s[i]);
	}

	cout << "�g�p����Ă���A���t�@�x�b�g�F";
	for(set<char>::iterator it=st.begin(); it!=st.end(); it++)
		cout << *it << " ";

	cout << endl;
}