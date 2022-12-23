#include<iostream>
using namespace std;
int Addition(int iNo1,int iNo2)
{

    int iAns;
    iAns=iNo1+iNo2;
    return iAns;
}
int main()
{
    int iNox1=0;
  int iNoy2=0;
  int iRet=0;

  cout<<"Enter first number:";
  cin>>iNox1;

  cout<<"Enter second number:";
  cin>>iNoy2;

    iRet=Addition(iNox1,iNoy2);

    cout<<"Adddition is:"<<iRet<<"\n";
    return 0;
}