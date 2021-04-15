#ifndef _COLLECTION_H_
#define _COLLECTION_H_

#include <string>
 
template<typename T> class collection{
private:
    //  �z��f�[�^
    T* m_pArray;
    //  �z��̒���
    int m_length;
public:
    //  �R���X�g���N�^
    collection(T* array,int length);
    //  �f�X�g���N�^
    ~collection();
    //  �ő�l�̎擾
    T getMax();
    //  �ŏ��l�̎擾
    T getMin();
    //  �����̕\��
    void showArray();
     
};

//template<>
//class collection<std::string>{
//private:
//    //  �z��f�[�^
//    std::string m_pArray;
//    //  �z��̒���
//    int m_length;
//public:
//    //  �R���X�g���N�^
//    collection(std::string str,int length);
//    //  �f�X�g���N�^
//    ~collection();
//    //  �ő�l�̎擾
//    std::string getMax();
//    //  �ŏ��l�̎擾
//    std::string getMin();
//    //  �����̕\��
//    void showArray();
//     
//};

//�R���X�g���N�^
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

//�f�X�g���N�^
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