#ifndef _PERSON_H_
#define _PERSON_H_

//��蕶������킵����Person���C���^�[�t�F�[�X�Ƃ��Ď������Ă��܂���
//�̂�FactoryMethod�Ƃ͏����Ⴄ���Ƃ����Ă��܂��Ă���Ǝv��

#include <iostream>
using namespace std;

class Person
{

public:
	//virtual ~Person() = 0;

	virtual void createRecipe() = 0;
	virtual void cook() = 0;
	
};

//Person::~Person(){}

#endif //_PERSON_H_