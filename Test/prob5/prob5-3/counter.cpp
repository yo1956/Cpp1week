#include "counter.h"
 
int Counter::m_totalCount = 0;

//  �R���X�g���N�^�i�J�E���g�񐔂�0�ŏ������j
Counter::Counter() : m_count(0)
{
}
void Counter::reset(){

	for(int i=0; i < m_count; i++)
		m_totalCount--;

	 m_count = 0;
}
void Counter::count(){
    m_count++;
	m_totalCount++;
}
int Counter::getCount(){
    return m_count;
}

int Counter::getTotalCount(){
	return m_totalCount;
}