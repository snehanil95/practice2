#include<iostream> 
using namespace std;
template <class T>

T Multiply(T no1,T no2)
{
    T ans;
    ans=no1*no2;

    return ans;
}
int main()
{
int iRet=Multiply(10,20);

cout<<"\nMultiplication of integers:"<<iRet;

float fRet=Multiply(10.09f,20.8f);
cout<<"\nMultiplication of float:"<<fRet;
    return 0;

}