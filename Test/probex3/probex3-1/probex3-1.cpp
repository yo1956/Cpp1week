#include <iostream>
#include <string>
 
using namespace std;
 

//template <typename T> T max(T a, T b);

template <typename T>
T my_max(T a, T b)
{
	if(a > b){
        return a;
    }
    return b;
}

string my_max(string a, string b){
	if(a.length() > b.length())
		return a;
	else
		return b;
	
}
 
int main(){
    cout << my_max(1,2) << endl;
    cout << my_max(1.75,3.12) << endl;
    string s1 = "aiu",s2 = "eo";
    cout << my_max(s1,s2) << endl;
    return 0;
}


