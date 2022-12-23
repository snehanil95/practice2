//problems on n numbers by using inheritance
using namespace std;
#include<iostream>

class numbers1
{
 public:
        int *Arr;
        int iSize;

        numbers1(int A)
        {
            cout<<"Allocating the memory for resources";
            iSize=A;
            Arr=new int[iSize];
        }

        ~numbers1()
        {
            cout<<"\nDeallocatiog the memory of resources..\n";
            delete []Arr;
        }

        void Accept()
        {

            cout<<"\nEnter the elements in aarray:\n";

            for(int i=0;i<iSize;i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {

            cout<<"the elements in aarray:\n";

            for(int i=0;i<iSize;i++)
            {
                cout<<Arr[i]<<"\t";
            }
        }
        


};
//inherit kelyavar constructor nahi yet mhanun
//base member initialisation karun connection karaychi
class Marvellous:public numbers1
{
    public:

        Marvellous(int i):numbers1(i)  //Base member initialisation
        {

        }
    int minimum()
        {
            int min=Arr[0];

            for(int i=0;i<iSize;i++)
            {
                if(Arr[i]<min)
                {
                    min=Arr[i];
                }
            }
            return min;
        }

};
int main()
{

  int len;

  cout<<"Enter the size of arrya:";
  cin>>len;

  Marvellous * obj=new Marvellous(len);

  obj->Accept();
  obj->Display();

  int iRet=obj->minimum();

  cout<<"\nSmallest number is:"<<iRet;

   delete obj;
    return 0;

}