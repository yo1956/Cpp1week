#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){
	list<string> str;
	string s;
	while(1){
		cout << "•¶š—ñ‚ğ“ü—ÍF";
		getline(cin, s);

		if(s == "")
			break;

		str.push_back(s);
	}

	
	for(list<string>::iterator itr = str.begin(); itr != str.end(); ){
		if(itr->size() >= 5){
			itr = str.erase(itr);
			continue;
		}
		itr++;
	}
	
	cout << "5•¶š–¢–‚Ì’PŒêF";
	for(list<string>::iterator itr = str.begin(); itr != str.end(); itr++){
		cout << *itr << " ";
	}
}