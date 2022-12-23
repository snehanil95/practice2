//input:76545675
//output:7 occures 2 times
//6 ocuurs 2 times
//5 occurs 3 times
//4 occurs 1 times
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

   void DisplayFrequency()
   {
    int iTemp=iNo;

    int iDigit=0;
    int Freq[10]={0};

    while(iTemp != 0)
    {

        iDigit=iTemp%10;

        Freq[iDigit]++;
        iTemp=iTemp/10;
    }

    for(int i=0;i<10;i++)
    {

        if(Freq[i]>0)
        {
            cout<<i<<"\tOccurs at\t"<<Freq[i]<<"times"<<"\n";
        }
    }
   }


};
int main()
{
 int iValue=0;

 cout<<"Enter a number:\n";
 cin>>iValue;

 Digit obj(iValue);

  obj.DisplayFrequency();
  
    return 0;

}