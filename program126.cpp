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
            iSize=A;
            Arr=new int[iSize];
        }

        ~numbers1()
        {
            cout<<"Destructor";

            delete []Arr;
        }

        void Accept()
        {

            cout<<"Enter the elements in aarray:";

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

  numbers1 nobj(4);
  //nubbers1 has auto storage class mhanun main samplyavar tyachi memory janar

  nobj.Accept();
  nobj.Display();


    return 0;
}