#ifndef _FUNDCALC_H_
#define _FUNDCALC_H_
 
class FundCalc{
protected:
    double m_number1;   //  ��ڂ̐�
    double m_number2;   //  ��ڂ̐�
public:
    //  �R���X�g���N�^
    FundCalc();
    //  ��ڂ̐���ݒ�
    void setNumber1(double number);
    //  ��ڂ̐���ݒ�
    void setNumber2(double number);
    //  ��ڂ̐���ݒ�
    double getNumber1();
    //  ��ڂ̐���ݒ�
    double getNumber2();
    //  ��̐��̘a���o��
    double add();
    //  ��̐��̍����o��
    double sub();
};
 
#endif // _FUNDCALC_H_