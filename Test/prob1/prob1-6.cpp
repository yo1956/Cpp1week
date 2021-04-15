#include <iostream>
#include <string> 

using namespace std;
 
int main(){
	string first,last;
    cout << "姓を入力: ";
	cin >> last;
	cout << "命を入力: ";
	cin >> first;
	
	cout << "名前は「" << last + first << "」です。" << endl;

    return 0;
}