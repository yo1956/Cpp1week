#include "fighteraircraft.h"
 
//  �R���X�g���N�^
FighterAircraft::FighterAircraft()
{
    //m_type = "�퓬�@";
	setType("�퓬�@");
}
////  �^�C�v�̎擾
//string FighterAircraft::getType()
//{
//    return m_type;
//}
//  ��s����
void FighterAircraft::fly()
{
    cout << "�U���ɏo�邽�߂ɔ�s" << endl;
}
//  �퓬����
void FighterAircraft::fight()
{
    cout << "�퓬���܂�" << endl;
}