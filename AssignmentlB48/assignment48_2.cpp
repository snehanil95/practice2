#include<iostream>
using namespace std;

template <class T>
int frequency(T *arr,int iSize,T iNo)
{
    int Count=0;
     for(int i=0;i<iSize;i++)
     {
        if(arr[i]==iNo)
        {
            Count++;
        }
     }
     return Count;
}
int main()
{
   /* int arr[]={10,20,30,10,30,40,10,40,10};

    int iRet=frequency(arr,9,10);

    cout<<"Numbers of 10 in array:"<<iRet;*/

    int len;

    

    cout<<"Enter the length of array:";
    cin>>len;
   
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }

    int val=0;

    cout<<"Enter the value for search freaquency:";
    cin>>val;
    int iRet=frequency(arr,len,val);

    cout<<"Numbers of "<<val<<" in array:"<<iRet;


    return 0;
}