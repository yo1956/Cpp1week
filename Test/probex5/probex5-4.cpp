#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	string s;

	cout << "英単語を入力：";
	getline(cin, s);

	set<char> st;
	for(int i=0; i < s.size(); i++){
		st.insert(s[i]);
	}

	cout << "使用されているアルファベット：";
	for(set<char>::iterator it=st.begin(); it!=st.end(); it++)
		cout << *it << " ";

	cout << endl;
}