#ifndef _CATCHER_H_
#define _CATCHER_H

#include "baseballplayer.h"

#include <iostream>
#include <string>
using namespace std;

class Catcher: public BaseballPlayer
{
public:
	//�R���X�g���N�^
	Catcher(string name, int number);

	//�ߎ肪�v���C����
	void play();
};

#endif //_CATCHER_H