#include "object.h"
 
//  �ÓI�����o�ϐ��̏����l��ݒ�
int Object::m_objectNum = 0;
 
//  �R���X�g���N�^
Object::Object()
{
    //  �I�u�W�F�N�g�̐����J�E���g����
    m_objectNum++;
}
//  �f�X�g���N�^
Object::~Object()
{
    //  �I�u�W�F�N�g�̐����J�E���g����
    m_objectNum--;
}

int Object::getObjectNum()
{
	return m_objectNum;
}