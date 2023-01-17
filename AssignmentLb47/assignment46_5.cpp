#include<iostream>
using namespace std;
template <class T>
T MinNum(T arr[],int size)
{
    T Min=arr[0];
    int i=0;
    int num;
    for(i=0;i<size;i++)
    {
        num=arr[i];
        if(num<Min)
        {
        Min=num;
        }
    }

    return Min;
}
int main()
{
    int arr[]={10,20,30,40};

    int iMin=MinNum(arr,4);
    cout<<"Min of integers:"<<iMin;

    float arr1[]={10.4f,20.4f,30.7f,40.78f};

    float fMin=MinNum(arr1,4);
    cout<<"\nMin of float:"<<fMin;
    return 0;
}
