#include<iostream>
using namespace std;

class Arrayx{
    public:
    int *Arr;
    int iSize;
    Arrayx(int n)
    {
        iSize=n;
        Arr=new int[iSize];
    }
    void Accept()
    {
        int i;
        cout<<"Enter the numbers:";
        for(i=0;i<iSize;i++)
        {
            cin>>Arr[i];

        }
    }

    void Display()
    {
        int i;
        cout<<"the numbers:";
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<"\t";

        }
    }

    int AddEven()
    {
        int i,sum=0;
        for(i=0;i<iSize;i++)
        {
            if((Arr[i]%2) == 0)
            {
                sum=sum+Arr[i];
            }
        }
        return sum;
    }

    int AddOdd()
    {
        int i,sum1=0;
        for(i=0;i<iSize;i++)
        {
            if((Arr[i] %2) != 0)
            {
                sum1=sum1+Arr[i];
            }
        }
        return sum1;
    }

    ~Arrayx()
    {
        delete []Arr;
    }
};
int main()
{
    int iRet=0;
    Arrayx aobj(4);
    aobj.Accept();
    aobj.Display();

    iRet=aobj.AddEven();
    cout<<"\nAdditon of Even:"<<iRet;

    iRet=aobj.AddOdd();
    cout<<"\nAdditon of Odd:"<<iRet;
    return 0;
}