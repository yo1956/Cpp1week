#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
	queue<string> q;
	string s;
	
	while(1){
		cout << "文字列を入力：";
		getline(cin, s);		

		if(s == "")
			break;

		q.push(s);
	}
	cout << endl;

	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

}