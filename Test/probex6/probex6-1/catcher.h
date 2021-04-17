#ifndef _CATCHER_H_
#define _CATCHER_H

#include "baseballplayer.h"

#include <iostream>
#include <string>
using namespace std;

class Catcher: public BaseballPlayer
{
public:
	//コンストラクタ
	Catcher(string name, int number);

	//捕手がプレイする
	void play();
};

#endif //_CATCHER_H