#include<iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
    PNODE First;
    int iCount;
       SinglyLL();
       

       void InserFirst(int no);
         void InserLast(int no);
           void InserAtPosition(int no,int iPos);


       void DeleteFirst();
         void DeleteLast();
           void DeleteAtPosition(int iPos);

           void Display();
           //void Count();
};

SinglyLL::SinglyLL()
{
  First=NULL;
  iCount=0;
}

void SinglyLL :: InserFirst(int no)
{
    PNODE newn =new NODE;

    newn->data=no;
    newn->next=NULL;

    if(First ==NULL)
    {

        First=newn;
        iCount++;
    }

    else
    {
        newn->next=First;
        First=newn;
        iCount++;
    }

}

void SinglyLL :: InserLast(int no)
{
PNODE newn =new NODE;

    newn->data=no;
    newn->next=NULL;

    if(First ==NULL)
    {

        First=newn;
        iCount++;
    }

    else
    {
        PNODE temp=First;
        while(temp->next !=NULL)
        {
            //First=newn;
          temp=temp->next;
           
        }
        temp->next=newn;;
        iCount++;
    }
}

void SinglyLL :: InserAtPosition(int no,int iPos)
{

  if((iPos <1)||(iPos>iCount+1))
  {
    return;
  }
  if(iPos==1)
  {
    InserFirst(no);
  }
  else if(iPos== iCount+1)
  {
    InserLast(no);
  }
  else{
    PNODE newn=new NODE;

    newn->data=no;
    newn->next=NULL;

    PNODE temp=First;
    for(int iCnt=1;iCnt< iPos-1;iCnt++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next=newn;

    iCount++;
  }
}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)  //if(iCount ==0)
    {
            return;
    }
    else if(First->next == NULL)  // if(iCount ==1)
    {
        delete First;
        First=NULL;
        iCount--;
    }
    else
    {
        PNODE temp=First;
        First=First->next;
        delete temp;
        iCount--;


    }

}

void SinglyLL :: DeleteLast()
{

if(First == NULL)  //if(iCount ==0)
    {
            return;
    }
    else if(First->next == NULL)  // if(iCount ==1)
    {
        delete First;
        First=NULL;
        iCount--;
    }
    else
    {
        PNODE temp=First;
        while(temp->next->next)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;

        iCount--;
    }

}

void SinglyLL :: DeleteAtPosition(int iPos)
{
    if((iPos <1)||(iPos>iCount+1))
  {
    return;
  }
  if(iPos==1)
  {
    DeleteFirst();
  }
  else if(iPos== iCount+1)
  {
    DeleteLast();
  }
  else{
    

    
    PNODE temp1=First;
    for(int iCnt=1;iCnt< iPos-1;iCnt++)
    {
        temp1=temp1->next;
    }
    PNODE temp2=temp1->next;
    temp1->next=temp2->next;

 delete temp2;

    iCount--;
  }

}

void SinglyLL :: Display()
{

    cout<<"Elements of linked list are:"<<"\n";

    PNODE temp=First;

    while(temp !=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main()
{

SinglyLL obj1;
//SinglyLL obj2;
cout<<sizeof(obj1)<<"\n";
cout<<"First pointer contains:"<<obj1.First<<"\n";
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";

obj1.InserFirst(51);
obj1.InserLast(21);
obj1.InserAtPosition(11,2);

obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";

obj1.InserFirst(101);
obj1.InserLast(211);
obj1.InserAtPosition(111,4);

obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";

obj1.DeleteAtPosition(2);
obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";


    return 0;
}
