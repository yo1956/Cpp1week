#include "fielder.h".
//using namespace std;
 
Fielder::Fielder(string name,int number) 
{
    m_name = name;
    m_number = number;
    m_kind = "野手";
}
//  ピッチャーがプレイする
void Fielder::play()
{
    cout << "バッターの球を受ける" << endl;
}