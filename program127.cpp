//problems on n numbers
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
int main()
{

  int len;

  cout<<"Enter the size of arrya:";
  cin>>len;

    numbers1 *nobj=new numbers1(len);  //Dynamic memory allocation

  nobj->Accept();
  nobj->Display();

  delete nobj;   //beacause of this destructor get called before deleting object
    //karan ethe apan nobj dynamically create kelay mhanun delete vaparun object
    //delete karu shakto(karaycha asel tr)
    return 0;

}