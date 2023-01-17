#include<iostream>
using namespace std;

template <class T>
int firstOccur(T *arr,int iSize,T iNo)
{
    int i=0;
     for(i=0;i<iSize;i++)
     {
        if(arr[i]==iNo)
        {
            break;
        }
     }

     if(i>iSize)
     {
        return -1;
     }

     else
     {
     return i+1;
     }
}
int main()
{
    int len;

    cout<<"Enter the length of array:";
    cin>>len;
   
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }

    int val=0;

    cout<<"Enter the value for search first occurence:";
    cin>>val;
    int iRet=firstOccur(arr,len,val);
     
     if(iRet== -1)
     {
        cout<<"Number not found in array:";
     }
     else
     {
    cout<<"Numbers "<<val<<" Occured in array at position:"<<iRet;
     }


    return 0;
}