#include "counter.h"
 
//  �R���X�g���N�^
Counter::Counter() : m_count(0)
{
 
}
//  �J�E���^�����Z�b�g
void Counter::reset()
{
    m_count = 0;
}
//  �񐔂��擾
int Counter::getCount()
{
    return m_count;
}
//  1���J�E���g
void Counter::count()
{
    m_count++;
}

void Counter::count(int num)
{
	for(int i=0; i < num; i++)
		m_count++;
}