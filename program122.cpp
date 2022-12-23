#include<iostream>
using namespace std;
class Arithmatic
{
    public:
    int iNo1;
    int iNo2;

    Arithmatic()
    {
        iNo1=0;
        iNo2=0;
    }

    Arithmatic(int A,int B)
    {
      iNo1=A;
      iNo2=B;  
    }
    
    int Addition()
    {
        return iNo1+iNo2;
    }

};
int main()
{
 int iNox1=0;
  int iNoy2=0;
  int iRet=0;

    cout<<"Enter first number:";
    cin>>iNox1;

    cout<<"Enter second number:";
    cin>>iNoy2;

    Arithmatic obj(iNox1,iNoy2);
    iRet=obj.Addition();
    cout<<"Adddition is:"<<iRet<<"\n";

    Arithmatic obj1;
    iRet=obj1.Addition();
    cout<<"Adddition is:"<<iRet<<"\n";
   
    Arithmatic obj2(20,21);
    iRet=obj2.Addition();
    cout<<"Adddition is:"<<iRet<<"\n";

    return 0;
}