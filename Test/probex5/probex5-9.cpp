#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;

int main(){
	map<string, char> word;
	string str[] =  {"room", "wonderful", "pork", "trap", "kind", "money", "dog", "given", "yellow", "eat", "apple", "neighbor"};
	vector<string> ans;
	bool flag_finish = false; //�I��邩�ǂ����̃t���O
	bool flag_zero = false;   //j=0�Ƃ��čŏ����璲�ׂȂ������߂̃t���O

	//�P��ƍŌ�̕����Ń}�b�v���쐬
	for(int i = 0; i < 12; i++){
		word[str[i]] = str[i].back();
	}

	for(int i=0; i < 12; i++){
		if(flag_finish == true)
			break;

		ans.clear();
		ans.push_back(str[i]); //����Ƃ�̎n�܂�����߂�

		//�Ō�܂ł������OK
		for(int j=0; j < 12; j++){
			if(flag_zero == true){
				j = 0;
				flag_zero = false;
			}

			if(word[ans.back()] == str[j].front()){ //vector�̍Ō�̗v�f�̍Ō�̕����ƁA�ŏ��̕�������v������̂�T��
				ans.push_back(str[j]);
				flag_zero = true;
			}
			
			if(j == 11 && ans.size() == 12){ //�Ō�܂ōs�������߂�
				flag_finish = true;
				break;
			}
			else if(j == 11 && ans.size() < 12 && flag_zero == false){ //��v������̂�������Ȃ��܂ܑS�����׏I������Ȃ炵��Ƃ�̎n�߂����߂Ȃ���
				break;
			}
			else if(j == 11 && ans.size() < 12)
				j = 0; //str[11]�𒲂ׂ�Ǝ��̃��[�v�ŋ����I��j=12�ɂȂ��ďI����Ă��܂��Ă��܂��̂�h��
		}
	}

	for(int i=0; i < ans.size(); i++)
		cout << ans[i] << " ";

	cout << endl;

}