#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
	queue<string> q;
	string s;
	
	while(1){
		cout << "•¶Žš—ñ‚ð“ü—ÍF";
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