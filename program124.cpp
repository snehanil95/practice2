#include<iostream>
using namespace std;

class Arrayx
{
    public:
    int *Arr;
    int iSize;

    Arrayx(int n)
    {
        int iSize=n;
        Arr=new int[iSize];
    }
     
    void Accept()
    {
        int i;
        cout<<"Enter the numbers:";
        for(i=0; i<iSize; i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        int i;
        cout<<"the numbers in array:";
        for(i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<"\t";
        }
    }

    
};

int main()
{
    int iNo=0;
    
    cout<<"Enter the Size of array:";
    cin>>iNo;
    Arrayx aobj(iNo);
    aobj.Accept();

    aobj.Display();
  
    return 0;
}