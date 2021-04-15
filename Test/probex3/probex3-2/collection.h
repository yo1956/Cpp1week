#ifndef _COLLECTION_H_
#define _COLLECTION_H_

#include <string>
 
template<typename T> class collection{
private:
    //  配列データ
    T* m_pArray;
    //  配列の長さ
    int m_length;
public:
    //  コンストラクタ
    collection(T* array,int length);
    //  デストラクタ
    ~collection();
    //  最大値の取得
    T getMax();
    //  最小値の取得
    T getMin();
    //  成分の表示
    void showArray();
     
};

//template<>
//class collection<std::string>{
//private:
//    //  配列データ
//    std::string m_pArray;
//    //  配列の長さ
//    int m_length;
//public:
//    //  コンストラクタ
//    collection(std::string str,int length);
//    //  デストラクタ
//    ~collection();
//    //  最大値の取得
//    std::string getMax();
//    //  最小値の取得
//    std::string getMin();
//    //  成分の表示
//    void showArray();
//     
//};

//コンストラクタ
template<typename T>
collection<T>::collection(T* array,int length)
{
	m_pArray = new T[length];
    m_length = length;
    for(int i = 0; i < m_length ; i++){
        m_pArray[i] = array[i];
    }
}

//template<std::string>
//collection<std::string>::collection(std::string str,int length)
//{
//	m_pArray = new std::string[length];
//    m_length = length;
//    for(int i = 0; i < m_length ; i++){
//        m_pArray[i] = str[i];
//    }
//}

//デストラクタ
template<typename T>
collection<T>::~collection()
{
    delete[] m_pArray;
}

template<typename T>
T collection<T>::getMax(){
	T* max = m_pArray;

	for(int i=0; i < m_length; i++){
		if(*(max+1) > *max)
			max = max + 1;
	}

	return *max;
}

template<typename T>
T collection<T>::getMin(){
	T* min = m_pArray;

	for(int i=0; i < m_length; i++){
		if(*(min+1) < *min)
			min = min + 1;
	}

	return *min;
}

template<typename T>
void collection<T>::showArray(){
	for(int i = 0; i < m_length ; i++){
			std::cout << m_pArray[i] << " ";
	}
	std::cout << std::endl;
}
 
#endif // _COLLECTION_H_