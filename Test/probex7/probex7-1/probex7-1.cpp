#include <iostream>
#include "Vector3.h"
 
using namespace std;
 
void vec(string, Vector3&);
 
int main(){
    Vector3 v1,v2,v3;
    //  �x�N�g���ɒl����
    v1.x = 1.0;
    v1.y = 2.0;
	v1.z = 3.0;
    v2 = v1;            //  �l����
    v3 = 4.0 * v1;      //  �x�N�g���̃X�J���[�{
    vec("v1=", v1);
    vec("v2=", v2);
    vec("v1 + v2=", v1 + v2);
    vec("v3=", v3);
    v3 += v1;           //  ������Z�q�i+=�j
    vec("v3=",v3);
    v1 -= v2;           //  ������Z�q�i-=�j
    vec("v1=", v1);
    return 0;
}
 
void vec(string vecname,Vector3& v)
{
    cout << vecname << "(" << v.x << "," << v.y << "," << v.z << ")" << endl;
}