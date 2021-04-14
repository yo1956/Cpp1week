#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;


//Greedy法で決めたパスを起点として2-opt法を使ってみる


//与えられたパスのコストを求める
double Cost(vector<int> const& path, vector<vector<double>> const& dist);
//2-opt法内でのスワップ処理
vector<int> SwapTwoOpt(vector<int> const& path, const int& i, const int& j);
//2-opt法
//vector<int> TwoOpt(vector<int>& path, vector<vector<double>> const& dist);
vector<int> TwoOpt(vector<int> path, vector<vector<double>> const& dist);
//greedy法
vector<int> Greedy(vector<int> path, vector<vector<double>> const& dist);

//入力した数のノード(座標を乱数で生成)に対して2-opt法で巡回セールスマン問題を解く
//ノード0がスタートで0に戻るとする
int main(){
	
	int num_node;
	cout << "乱数でノードの座標を生成するため、ノード数を自然数で設定：";
	cin >> num_node;

	bool flag_display = true;
	string s;
	cout << "生成したノードの座標と各ノード間の距離を表示するならそのままEnterキー、したくないならnを入力：";
	
	cin.ignore();
	getline(cin, s);

	if(s == "n")
		flag_display = false;

	cout << endl;

	random_device rnd;
	mt19937 mt(rnd());
	uniform_int_distribution<> rand200(1,200); //1～200の範囲の一様乱数

	vector<double> node_x(num_node,0); //ノードのx座標
	vector<double> node_y(num_node,0); //ノードのy座標
	vector<vector<double>> dist(num_node,vector<double>(num_node,0)); //各ノードの距離

	//ノードの座標を乱数で入れていく
	for(int i=0; i < num_node; i++){
		node_x[i] = rand200(mt);
		node_y[i] = rand200(mt);

		if(flag_display == true)
			cout << "(x" << i << ",y" << i << ")=(" << node_x[i] << "," << node_y[i] << ")" << endl;
	}


	//各ノードの距離を計算してdistに格納
	for(int i=0; i < num_node; i++){
		for(int j=0; j < num_node; j++){
			dist[i][j] = sqrt((node_x[j]-node_x[i])*(node_x[j]-node_x[i]) + (node_y[j]-node_y[i])*(node_y[j]-node_y[i]));
			
			if(flag_display == true)
				cout << "dist[" << i << "][" << j << "] = " << dist[i][j] << endl;
		}
	}

	
	//最初のパスを0～num_node-1まで順番にたどるとする場合
	cout << "【最初のパスを0～num_node-1まで順番にたどるとする場合】" << endl;
	vector<int> path;
	for(int i=0; i < num_node; i++){
		path.push_back(i);
	}
	path.push_back(0); //スタート地点の0に戻るため最後に0を入れとく

	//局所的な最適解を入れる
	vector<int> new_path;

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

	cout << endl;

	//最初のパスをGreedy法で決める場合
	cout << "【最初のパスをGreedy法で決める場合】" << endl;
	//vector<int> path1;
	//for(int i=0; i < num_node; i++){
	//	path1.push_back(i);
	//}
	//path1.push_back(0); //スタート地点の0に戻るため最後に0を入れとく

	path = Greedy(path, dist);
	new_path.clear();

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
double Cost(vector<int> const& path, vector<vector<double>> const& dist)
{
	double cost = 0;
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
vector<int> TwoOpt(vector<int> path, vector<vector<double>> const& dist)
{
	vector<int> new_path;

	double best_cost = Cost(path, dist); //現在の最短コスト
	double new_cost = 0;                 //スワップ後のコスト
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

//greedy法
vector<int> Greedy(vector<int> path, vector<vector<double>> const& dist)
{
	int min_dist = 10000000; //一番近い都市までの距離
	int min_city = 0;        //一番近い都市
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
