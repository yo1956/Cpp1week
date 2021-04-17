#include "catcher.h"
//using namespace std;
 
Catcher::Catcher(string name,int number) 
{
    m_name = name;
    m_number = number;
    m_kind = "キャッチャー";
}
//  ピッチャーがプレイする
void Catcher::play()
{
    cout << "ピッチャーの球を受ける" << endl;
}