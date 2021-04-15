#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<string> str;
	string s;
	while(1){
		cout << "文字列を入力：";
		getline(cin, s);

		if(s == "")
			break;

		str.push_back(s);
	}

	
	int max_index = 0;
	int max_length = str[0].length();
	int min_index = 0;
	int min_length = str[0].length();
	for(int i=1; i < str.size(); i++){
		if(str[i].length() > str[max_index].length()){
			max_index = i;
			max_length = str[max_index].length();
		}

		if(str[i].length() < str[min_index].length()){
			min_index = i;
			min_length = str[min_index].length();
		}
	}

	cout << "最長の単語：";
	for(int i=0; i < str.size(); i++){
		if(str[i].length() == max_length)
			cout << str[i] << " ";
	}
	cout << endl;

	cout << "最短の単語：";
	for(int i=0; i < str.size(); i++){
		if(str[i].length() == min_length)
			cout << str[i] << " ";
	}
	cout << endl;

	
}