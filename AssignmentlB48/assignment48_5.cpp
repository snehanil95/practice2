#include<iostream>
using namespace std;

template <class T>
void revArray(T *arr,int iSize)
{
    int i=0;
    T temp;
    int start=0,last=iSize-1;
    
    while(start<iSize/2)
     {
        
        
        temp=arr[start];
        arr[start]=arr[last];
        arr[last]=temp;
        start++;
        last--;
       
     }
 cout<<"Array after reverse:";

    for(int j=0;j<iSize;j++)
    {
        cout<<arr[j]<<"\t";
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

   revArray(arr,len);

    return 0;
}