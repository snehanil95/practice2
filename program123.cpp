#include<iostream>
using namespace std;

class Numbers
{
    public:
    int iVal;


    Numbers(int i)
    {
        iVal=i;
    }

    int Factorial()
    {
        int i,mult=1;
        for(i=1;i<=iVal;i++)
        {
         mult=mult*i;
        }
        return mult;
    }

};

int main()
{
    int iNo=0;
    int iRet=0;
  cout<<"Enter the number:";
  cin>>iNo;

   Numbers nobj(iNo);
   iRet=nobj.Factorial();

   cout<<"Factorial of "<<iNo<<" \tis:"<<iRet;
    return 0;
}