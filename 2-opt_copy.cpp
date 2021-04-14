#include <iostream>
#include <string>
#include <vector>

using namespace std;

//�^����ꂽ�p�X�̃R�X�g�����߂�
int Cost(vector<int> const& path, vector<vector<int>> const& dist);

//2-opt�@���ł̃X���b�v����
vector<int> SwapTwoOpt(vector<int> const& path, const int& i, const int& j);
//void SwapTwoOpt(vector<int>& new_path, vector<int> const& path, const int& i, const int& j);

//2-opt�@
//vector<int> TwoOpt(vector<int> const& path, vector<vector<int>> const& dist);
vector<int> TwoOpt(vector<int>& path, vector<vector<int>> const& dist);


//0�`5�̃m�[�h�ɑ΂���2-opt�@�ŏ���Z�[���X�}����������
//0���X�^�[�g��0�ɖ߂�Ƃ���
int main(){
	//vector<int> node(6,0); //�m�[�h
	vector<vector<int>> dist(6,vector<int>(6,0)); //�e�m�[�h�̋���

	//�K���ɍl�����m�[�h�Ƌ���
	dist[0][0] = 0;
	dist[0][1] = 2;
	dist[0][2] = 1;
	dist[0][3] = 4;
	dist[0][4] = 5;
	dist[0][5] = 5;

	dist[1][0] = 2;
	dist[1][1] = 0;
	dist[1][2] = 2;
	dist[1][3] = 3;
	dist[1][4] = 3;
	dist[1][5] = 4;

	dist[2][0] = 1;
	dist[2][1] = 2;
	dist[2][2] = 0;
	dist[2][3] = 2;
	dist[2][4] = 4;
	dist[2][5] = 1;

	dist[3][0] = 4;
	dist[3][1] = 3;
	dist[3][2] = 2;
	dist[3][3] = 0;
	dist[3][4] = 2;
	dist[3][5] = 1;

	dist[4][0] = 5;
	dist[4][1] = 3;
	dist[4][2] = 4;
	dist[4][3] = 2;
	dist[4][4] = 0;
	dist[4][5] = 4;

	dist[5][0] = 5;
	dist[5][1] = 4;
	dist[5][2] = 1;
	dist[5][3] = 1;
	dist[5][4] = 4;
	dist[5][5] = 0;

	//�ŏ��̃p�X��0,1,2,3,4,5�Ƃ���(�K��)������Ă���v���������Ԃ�ŏ��̃p�X�������ƌ���������������������o�Ȃ�����
	//int org_path[] = {0,1,2,3,4,5,0};
	int org_path[] = {0,2,4,1,3,5,0};
	vector<int> path(org_path, end(org_path)); 


	vector<int> new_path;

	////SwapTwoOpt�f�o�b�O�p
	//new_path = SwapTwoOpt(path, 2, 4);
	//for(int i=0; i < new_path.size(); i++)
	//	cout << new_path[i] << " ";
	//cout << endl;


	//�o�͕�
	cout << "�ŏ��̃p�X�F";
	for(int i=0; i < path.size(); i++)
		cout << path[i] << " ";

	cout << endl;
	cout << "�ŏ��̃p�X�̃R�X�g�F" << Cost(path, dist) << endl;

	cout << "2-opt�@��K�p" << endl;
	new_path = TwoOpt(path, dist);

	cout << "�Ǐ��I�ȍœK���̃p�X�F";
	for(int i=0; i < new_path.size(); i++)
		cout << new_path[i] << " ";
	cout << endl;

	cout << "���̃R�X�g�F" << Cost(new_path, dist) << endl;

}



//�^����ꂽ�p�X�̃R�X�g�����߂�
int Cost(vector<int> const& path, vector<vector<int>> const& dist)
{
	int cost = 0;
	for(int i = 1; i < path.size(); i++){
		cost += dist[path[i-1]][path[i]];
	}

	return cost;
}

//2-opt�@���ł̂Ȃ���������
vector<int> SwapTwoOpt(vector<int> const& path, const int& i, const int& j)
{
	vector<int> new_path(path.size(), 0);

	//new_path��path���R�s�[
	for(int k=0; k < path.size(); k++){
		new_path[k] = path[k];
	}
	//����ւ�������reverse
	vector<int>::iterator it = new_path.begin() + i;
	reverse(it,it+(j-i+1));

	return new_path;
}


//2-opt�@
vector<int> TwoOpt(vector<int>& path, vector<vector<int>> const& dist)
{
	vector<int> new_path;

	int best_cost = Cost(path, dist); //���݂̍ŒZ�R�X�g
	int new_cost = 0;                 //�X���b�v��̃R�X�g
	int cnt = 0;
	int total_cnt = 0;
	
	while(true){
		cnt = 0;
		for(int i = 1; i < path.size()-2; i++){ //i=1����n�߂�̂�i=0����n�߂�ƃX�^�[�g�n�_��swap�ΏۂɂȂ��Ă��܂����� //�S�[���n�_����O�܂ł�j�͈̔͂Ȃ̂�i�͂��̈�O��path.size()-2�܂�
			for(int j = i+2; j < path.size()-1; j++){ //�S�[���n�_��swap�ΏۂƂ��Ȃ��̂�path.size()-1�܂� //j=i+2����n�߂�̂�j=i+1���炾��j��i+1���q���ς����j��i+1�������ɂȂ��Ă��܂�����
				new_path = SwapTwoOpt(path, i, j);
				new_cost = Cost(new_path, dist);

				if(new_cost < best_cost){
					path = new_path;
					best_cost = new_cost;
					cnt++; //�q���ς�����J�E���g
					break;
				}
			}
			
			if(cnt > 0) //�q���ς����Ȃ�܂��n�߂���
				break;
		}
		total_cnt += cnt;

		//����ȏ���P�������߂Ȃ��Ȃ�I���
		if(cnt == 0)
			break;
	}

	cout << "swap�񐔁F" << total_cnt << endl;
	
	return new_path;
}
