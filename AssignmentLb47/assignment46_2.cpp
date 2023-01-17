#include<iostream> 
using namespace std;
template <class T>

T MaxNum(T no1,T no2,T no3)
{
    T max=no1;
    if(no1<no2)
    {
        max=no2;
    }
    if(max<no3)
    {
        max=no3;
    }

    return max;
}
int main()
{
int iRet=MaxNum(10,20,38);
cout<<"\nMax of integers:"<<iRet;

float fRet=MaxNum(10.09f,20.8f,20.7f);
cout<<"\nMax of float:"<<fRet;
    
    return 0;

}
