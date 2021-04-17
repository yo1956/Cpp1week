#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	stack<char> stk;
	string s;
	
	cout << "•¶Žš—ñ‚ð“ü—ÍF";
	getline(cin, s);		
	cout << endl;

	for(int i=0; i < s.size(); i++){
		stk.push(s[i]);
	}

	while(!stk.empty()){
		cout << stk.top();
		stk.pop();
	}
	cout << endl;

}