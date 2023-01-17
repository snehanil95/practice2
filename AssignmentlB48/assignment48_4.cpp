#include<iostream>
using namespace std;

template <class T>
int lastOccur(T *arr,int iSize,T iNo)
{
    int i=0,iCnt=-1;
   // bool flag=false;

     for(i=0;i<iSize;i++)
     {
        if(arr[i]==iNo)
        {
            //flag=true;
            iCnt=i+1;
        }
     }
    
     return iCnt;
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

    cout<<"Enter the value for search last occurence:";
    cin>>val;
    int iRet=lastOccur(arr,len,val);
     
     if(iRet== -1)
     {
        cout<<"Number not found in array:";
     }
     else
     {
    cout<<"Numbers "<<val<<" last Occured in array at position:"<<iRet;
     }


    return 0;
}