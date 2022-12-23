//problems on n numbers by using inheritance
using namespace std;
#include<iostream>

class Digit
{
 public:
 int iNo;

    Digit()
    {
        iNo=0;
    }
      Digit(int A)
      {
        iNo=A;
      }

   int sumEvnDigit()
   {
    int dig=0;
    int sum=0;
    int temp=iNo; //for avoiding iNo become 0 
    //we copied it into temp 
    //due to this all operations will get performed on temp variable
    while(temp !=0)
    {
        dig=temp%10;
        
        
        if(dig%2 ==0)
        {
            sum=sum+dig;
        }
        temp=temp/10;
    }
    //cout<<sum;
    return sum;
   }


};
int main()
{
 int iValue=0;

 cout<<"Enter a number:\n";
 cin>>iValue;

 Digit obj(iValue);

  //
  
  int iRet=obj.sumEvnDigit();

cout<<"\nSumation of even digit:"<<iRet<<"\n";
 cout<<obj.iNo<<"\n";
    return 0;

}