#ifndef _COUNTER_H_
#define _COUNTER_H_
 
//  �J�E���^�[�N���X
class Counter{
private:
    //  �J�E���g
    int m_count;
public:
    //  �R���X�g���N�^
    Counter();
    //  �J�E���^�����Z�b�g
    void reset();
    //  �J�E���g���ꂽ�񐔂��擾
    int getCount();
    //  1���J�E���g
    void count();
	void count(int num);
};
 
#endif // _COUNTER_H_