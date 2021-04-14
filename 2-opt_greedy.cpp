#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;


//Greedy�@�Ō��߂��p�X���N�_�Ƃ���2-opt�@���g���Ă݂�


//�^����ꂽ�p�X�̃R�X�g�����߂�
double Cost(vector<int> const& path, vector<vector<double>> const& dist);
//2-opt�@���ł̃X���b�v����
vector<int> SwapTwoOpt(vector<int> const& path, const int& i, const int& j);
//2-opt�@
//vector<int> TwoOpt(vector<int>& path, vector<vector<double>> const& dist);
vector<int> TwoOpt(vector<int> path, vector<vector<double>> const& dist);
//greedy�@
vector<int> Greedy(vector<int> path, vector<vector<double>> const& dist);

//���͂������̃m�[�h(���W�𗐐��Ő���)�ɑ΂���2-opt�@�ŏ���Z�[���X�}����������
//�m�[�h0���X�^�[�g��0�ɖ߂�Ƃ���
int main(){
	
	int num_node;
	cout << "�����Ńm�[�h�̍��W�𐶐����邽�߁A�m�[�h�������R���Őݒ�F";
	cin >> num_node;

	bool flag_display = true;
	string s;
	cout << "���������m�[�h�̍��W�Ɗe�m�[�h�Ԃ̋�����\������Ȃ炻�̂܂�Enter�L�[�A�������Ȃ��Ȃ�n����́F";
	
	cin.ignore();
	getline(cin, s);

	if(s == "n")
		flag_display = false;

	cout << endl;

	random_device rnd;
	mt19937 mt(rnd());
	uniform_int_distribution<> rand200(1,200); //1�`200�͈̔͂̈�l����

	vector<double> node_x(num_node,0); //�m�[�h��x���W
	vector<double> node_y(num_node,0); //�m�[�h��y���W
	vector<vector<double>> dist(num_node,vector<double>(num_node,0)); //�e�m�[�h�̋���

	//�m�[�h�̍��W�𗐐��œ���Ă���
	for(int i=0; i < num_node; i++){
		node_x[i] = rand200(mt);
		node_y[i] = rand200(mt);

		if(flag_display == true)
			cout << "(x" << i << ",y" << i << ")=(" << node_x[i] << "," << node_y[i] << ")" << endl;
	}


	//�e�m�[�h�̋������v�Z����dist�Ɋi�[
	for(int i=0; i < num_node; i++){
		for(int j=0; j < num_node; j++){
			dist[i][j] = sqrt((node_x[j]-node_x[i])*(node_x[j]-node_x[i]) + (node_y[j]-node_y[i])*(node_y[j]-node_y[i]));
			
			if(flag_display == true)
				cout << "dist[" << i << "][" << j << "] = " << dist[i][j] << endl;
		}
	}

	
	//�ŏ��̃p�X��0�`num_node-1�܂ŏ��Ԃɂ��ǂ�Ƃ���ꍇ
	cout << "�y�ŏ��̃p�X��0�`num_node-1�܂ŏ��Ԃɂ��ǂ�Ƃ���ꍇ�z" << endl;
	vector<int> path;
	for(int i=0; i < num_node; i++){
		path.push_back(i);
	}
	path.push_back(0); //�X�^�[�g�n�_��0�ɖ߂邽�ߍŌ��0�����Ƃ�

	//�Ǐ��I�ȍœK��������
	vector<int> new_path;

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

	cout << endl;

	//�ŏ��̃p�X��Greedy�@�Ō��߂�ꍇ
	cout << "�y�ŏ��̃p�X��Greedy�@�Ō��߂�ꍇ�z" << endl;
	//vector<int> path1;
	//for(int i=0; i < num_node; i++){
	//	path1.push_back(i);
	//}
	//path1.push_back(0); //�X�^�[�g�n�_��0�ɖ߂邽�ߍŌ��0�����Ƃ�

	path = Greedy(path, dist);
	new_path.clear();

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
double Cost(vector<int> const& path, vector<vector<double>> const& dist)
{
	double cost = 0;
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
vector<int> TwoOpt(vector<int> path, vector<vector<double>> const& dist)
{
	vector<int> new_path;

	double best_cost = Cost(path, dist); //���݂̍ŒZ�R�X�g
	double new_cost = 0;                 //�X���b�v��̃R�X�g
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

//greedy�@
vector<int> Greedy(vector<int> path, vector<vector<double>> const& dist)
{
	int min_dist = 10000000; //��ԋ߂��s�s�܂ł̋���
	int min_city = 0;        //��ԋ߂��s�s
	int distance = 0; 

	for(int i=0; i < path.size()-2; i++){
		for(int j=i+1; j < path.size()-1; j++){
			distance = dist[i][j];

			if(distance < min_dist){
				min_dist = distance;
				min_city = j;
			}
		}
		swap(path[i+1], path[min_city]);
	}

	return path;
}
