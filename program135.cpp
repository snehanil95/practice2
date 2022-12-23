
//Anagram number
//1001 & 1010
//number of frequency occured in number is same

#include<iostream>
using namespace std;

bool chkAnagrams(int iNo1,int iNo2)
{
    int freq1[10]={0};
    
    int iDigit=0;
    int iDigit1=0;
    while(iNo1 !=0)
    {
      iDigit=iNo1%10;
      iDigit1=iNo2%10;

      freq1[iDigit]++;

      iNo1=iNo1/10;
      iNo2=iNo2/10;
      
      freq1[iDigit1]--;

    }

   bool flag=true;
    for(int i=0;i<10;i++)
    {
        if(freq1[i]==0)
        {
            flag=true;
            
        }
        else
        {
            flag=false;
            break;
        }

    }
    return flag;

}
int main()
{
int iVal1=0,iVal2=0;

cout<<"Enter a number:";
cin>>iVal1;

cout<<"\nEnter a second number:";
cin>>iVal2;

bool bRet=false;

bRet=chkAnagrams(iVal1,iVal2);

if(bRet==true)
{
    cout<<"Numbers are anagram\n";
}
else 
{
    cout<<"Not aanagrams\n";
}

    return 0;
}