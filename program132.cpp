//maximum digit occurance
//input:76545675
//output:
//5 occurs 3 times

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

   void MaxFrequency()
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
   int max=0;
   int maxDigit=0;
    for(int i=0;i<10;i++)
    {

        if(Freq[i]>max)
        {
            max=Freq[i];
            maxDigit=i;
            
        }
    }
    cout<<"\n"<<maxDigit<<"  occurs at "<<max<<" times";
   }


};
int main()
{
 int iValue=0;

 cout<<"Enter a number:\n";
 cin>>iValue;

 Digit obj(iValue);

  obj.MaxFrequency();
  
    return 0;

}