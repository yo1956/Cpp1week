#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <string>
using namespace std;

class Singleton {

private:
  //コンストラクタ、コピーコンストラクタ、コピー代入演算子、デストラクタをprivateに置く	
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