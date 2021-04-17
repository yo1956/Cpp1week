#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;

int main(){
	map<string, char> word;
	string str[] =  {"room", "wonderful", "pork", "trap", "kind", "money", "dog", "given", "yellow", "eat", "apple", "neighbor"};
	vector<string> ans;
	bool flag_finish = false; //終わるかどうかのフラグ
	bool flag_zero = false;   //j=0として最初から調べなおすためのフラグ

	//単語と最後の文字でマップを作成
	for(int i = 0; i < 12; i++){
		word[str[i]] = str[i].back();
	}

	for(int i=0; i < 12; i++){
		if(flag_finish == true)
			break;

		ans.clear();
		ans.push_back(str[i]); //しりとりの始まりを決める

		//最後までいければOK
		for(int j=0; j < 12; j++){
			if(flag_zero == true){
				j = 0;
				flag_zero = false;
			}

			if(word[ans.back()] == str[j].front()){ //vectorの最後の要素の最後の文字と、最初の文字が一致するものを探す
				ans.push_back(str[j]);
				flag_zero = true;
			}
			
			if(j == 11 && ans.size() == 12){ //最後まで行けたらやめる
				flag_finish = true;
				break;
			}
			else if(j == 11 && ans.size() < 12 && flag_zero == false){ //一致するものが見つからないまま全部調べ終わったならしりとりの始めを決めなおす
				break;
			}
			else if(j == 11 && ans.size() < 12)
				j = 0; //str[11]を調べると次のループで強制的にj=12になって終わってしまってしまうのを防ぐ
		}
	}

	for(int i=0; i < ans.size(); i++)
		cout << ans[i] << " ";

	cout << endl;

}