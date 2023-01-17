#include<iostream>
using namespace std;
template <class T>
T MaxNum(T arr[],int size)
{
    T Max=arr[0];
    int i=0;
    
    for(i=0;i<size;i++)
    {
       
        if(arr[i]>Max)
        {
        Max=arr[i];
        }
    }

    return Max;
}
int main()
{
    int arr[]={10,20,30,40};

    int iMax=MaxNum(arr,4);
    cout<<"max of integers:"<<iMax;

    float arr1[]={10.4f,20.4f,30.7f,40.78f};

    float fMax=MaxNum(arr1,4);
    cout<<"\nMax of float:"<<fMax;
    return 0;
}
