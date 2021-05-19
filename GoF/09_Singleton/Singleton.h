#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <string>
using namespace std;

class Singleton {

private:
  //�R���X�g���N�^�A�R�s�[�R���X�g���N�^�A�R�s�[������Z�q�A�f�X�g���N�^��private�ɒu��	
  Singleton(){}
  Singleton(string);
  Singleton(const Singleton*);
  Singleton* operator=(const Singleton*);
  ~Singleton(){}

  string m_str;

public:
  static Singleton* getInstance(string);
  static Singleton* getInstance();

  string getString();
  void setString(string);

};

#endif