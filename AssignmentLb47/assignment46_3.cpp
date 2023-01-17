#include<iostream>
using namespace std;
template <class T>
T AddN(T *arr,int size)
{
    T sum=0;
    int i=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    return sum;
}
int main()
{
    int arr[]={10,20,30,40};

    int iSum=AddN(arr,4);
    cout<<"additon of integers:"<<iSum;

    int arr[]={10.4,20.4,30.7,40.78};

    int fSum=AddN(arr,4);
    cout<<"additon of float:"<<fSum;
    return 0;
}