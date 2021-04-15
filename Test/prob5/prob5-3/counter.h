#ifndef _COUNTER_H_
#define _COUNTER_H_
 
class Counter{
private:
    //  ��
    int m_count;
	static int m_totalCount;
public:
    //  �R���X�g���N�^
    Counter();
    //  ���Z�b�g
    void reset();
    //  �J�E���g
    void count();
    //  �J�E���g�̐�
    int getCount();
	
	static int getTotalCount();
};
 
#endif // _COUNTER_H_