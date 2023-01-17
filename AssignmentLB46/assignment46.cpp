#include<iostream>
using namespace std;

class Array
{
    protected:
    int *Arr;
    int size;
    public:
    Array(int value=10)
    {
        cout<<"Inside Constructor\n";

        this->size=value;
        this->Arr=new int[size];
    }
    Array(Array &ref)
    {
        cout<<"Inside copy constructor\n";

        this->size=ref.size;
        this->Arr=new int[this->size];

        for(int i=0;i<size;i++)
        {
            this->Arr[i]=ref.Arr[i];
        }
    }
    ~Array()
    {
        cout<<"Inside Destructor\n";
        delete []Arr;
    }

    inline void Accept();
    inline void Display();

};

void Array::Accept()
{
    cout<<"Enter the values\n";

    for(int i=0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are\n";

    for(int i=0;i<this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

class ArrSearch:public Array
{

    public :
    ArrSearch(int no=10): Array(no)
    {

    }
    int Frequency(int);
    int SearchFirst(int);
    int EvenCount();
    int OddCount();
    int SearchLast(int);
    int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
    int i=0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }

    if(i==size)
    {
        return -1;
    }
    else{
        return i+1;
    }
}

int ArrSearch::Frequency(int value)
{
    int iCnt=0;

    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int ArrSearch::SearchLast(int value)
{
    int i=0,iCnt=0;
    bool flag=false;
    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
         flag=true;
         iCnt=i;
        }
    }

    
    if(flag==true)
    {
        return iCnt+1;
    }
    else
    {
        return -1;
    }

}
int ArrSearch::EvenCount()
{
    int iCnt=0;
for(int i=0;i<size;i++)
    {
        if(Arr[i]%2== 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int ArrSearch::OddCount()
{
 int iCnt=0;
for(int i=0;i<size;i++)
    {
        if(Arr[i]%2 != 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int ArrSearch::SumAll()
{
 int iSum=0;
for(int i=0;i<size;i++)
    {
        if(Arr[i]%2== 0)
        {
            iSum=iSum+Arr[i];
        }
    }
    return iSum;
}

int main()
{

    cout<<"inside main\n";

    ArrSearch sobj1(5);

    sobj1.Accept();
    sobj1.Display();

    int iRet=sobj1.Frequency(11);
    cout<<"Frequency is"<<iRet<<"\n";

    iRet=sobj1.SearchFirst(11);
    cout<<"First OCcurence is "<<iRet<<"\n";

    iRet=sobj1.SearchLast(11);
    cout<<"Last OCcurence is "<<iRet<<"\n";

    iRet=sobj1.EvenCount();
    cout<<"Even count is "<<iRet<<"\n";

    iRet=sobj1.OddCount();
    cout<<"Odd count is "<<iRet<<"\n";

    iRet=sobj1.SumAll();
    cout<<"Sum of all elements is "<<iRet<<"\n";




    return 0;
}
