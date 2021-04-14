#include <iostream>
#include <string>
#include <vector>

using namespace std;

//与えられたパスのコストを求める
int Cost(vector<int> const& path, vector<vector<int>> const& dist);

//2-opt法内でのスワップ処理
vector<int> SwapTwoOpt(vector<int> const& path, const int& i, const int& j);
//void SwapTwoOpt(vector<int>& new_path, vector<int> const& path, const int& i, const int& j);

//2-opt法
//vector<int> TwoOpt(vector<int> const& path, vector<vector<int>> const& dist);
vector<int> TwoOpt(vector<int>& path, vector<vector<int>> const& dist);


//0～5のノードに対して2-opt法で巡回セールスマン問題を解く
//0がスタートで0に戻るとする
int main(){
	//vector<int> node(6,0); //ノード
	vector<vector<int>> dist(6,vector<int>(6,0)); //各ノードの距離

	//適当に考えたノードと距離
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

	//最初のパスを0,1,2,3,4,5とする(適当)→作ってから思ったがたぶん最初のパスが悪いと厳密解から程遠い解しか出ないかも
	//int org_path[] = {0,1,2,3,4,5,0};
	int org_path[] = {0,2,4,1,3,5,0};
	vector<int> path(org_path, end(org_path)); 


	vector<int> new_path;

	////SwapTwoOptデバッグ用
	//new_path = SwapTwoOpt(path, 2, 4);
	//for(int i=0; i < new_path.size(); i++)
	//	cout << new_path[i] << " ";
	//cout << endl;


	//出力部
	cout << "最初のパス：";
	for(int i=0; i < path.size(); i++)
		cout << path[i] << " ";

	cout << endl;
	cout << "最初のパスのコスト：" << Cost(path, dist) << endl;

	cout << "2-opt法を適用" << endl;
	new_path = TwoOpt(path, dist);

	cout << "局所的な最適解のパス：";
	for(int i=0; i < new_path.size(); i++)
		cout << new_path[i] << " ";
	cout << endl;

	cout << "そのコスト：" << Cost(new_path, dist) << endl;

}



//与えられたパスのコストを求める
int Cost(vector<int> const& path, vector<vector<int>> const& dist)
{
	int cost = 0;
	for(int i = 1; i < path.size(); i++){
		cost += dist[path[i-1]][path[i]];
	}

	return cost;
}

//2-opt法内でのつなぎかえ処理
vector<int> SwapTwoOpt(vector<int> const& path, const int& i, const int& j)
{
	vector<int> new_path(path.size(), 0);

	//new_pathへpathをコピー
	for(int k=0; k < path.size(); k++){
		new_path[k] = path[k];
	}
	//入れ替え部分をreverse
	vector<int>::iterator it = new_path.begin() + i;
	reverse(it,it+(j-i+1));

	return new_path;
}


//2-opt法
vector<int> TwoOpt(vector<int>& path, vector<vector<int>> const& dist)
{
	vector<int> new_path;

	int best_cost = Cost(path, dist); //現在の最短コスト
	int new_cost = 0;                 //スワップ後のコスト
	int cnt = 0;
	int total_cnt = 0;
	
	while(true){
		cnt = 0;
		for(int i = 1; i < path.size()-2; i++){ //i=1から始めるのはi=0から始めるとスタート地点もswap対象になってしまうため //ゴール地点より一つ前までがjの範囲なのでiはその一つ前のpath.size()-2まで
			for(int j = i+2; j < path.size()-1; j++){ //ゴール地点はswap対象としないのでpath.size()-1まで //j=i+2から始めるのはj=i+1からだとjとi+1を繋ぎ変える際jとi+1が同じになってしまうから
				new_path = SwapTwoOpt(path, i, j);
				new_cost = Cost(new_path, dist);

				if(new_cost < best_cost){
					path = new_path;
					best_cost = new_cost;
					cnt++; //繋ぎ変えたらカウント
					break;
				}
			}
			
			if(cnt > 0) //繋ぎ変えたならまた始めから
				break;
		}
		total_cnt += cnt;

		//これ以上改善が見込めないなら終わる
		if(cnt == 0)
			break;
	}

	cout << "swap回数：" << total_cnt << endl;
	
	return new_path;
}
