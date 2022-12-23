//singly Circular in cpp

#include<iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


class DoublyLL
{
    public:
    PNODE First;
   // PNODE Last;
    int iCount;
       DoublyLL();
       

       void InserFirst(int no);
         void InserLast(int no);
           void InserAtPosition(int no,int iPos);


       void DeleteFirst();
         void DeleteLast();
           void DeleteAtPosition(int iPos);

           void Display();
           //void Count();
};

DoublyLL::DoublyLL()
{
  First=NULL;
  //Last=NULL;
  iCount=0;
}

void DoublyLL :: InserFirst(int no)
{
    PNODE newn =new NODE;

    newn->data=no;
    newn->next=NULL;
    newn ->prev=NULL;

    if(First ==NULL)
    {

        First=newn;
        iCount++;
    }

    else
    {
        newn->next=First;
        First->prev=newn;
        First=newn;
        newn->prev=NULL;

        iCount++;
    }

}

void DoublyLL :: InserLast(int no)
{
PNODE newn =new NODE;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    PNODE temp=First;
    if(First ==NULL) 
    {

        First=newn;
        
        iCount++;
    }

    else
    {
      while(temp->next !=NULL)
      {
        temp=temp->next;
      }
      temp->next=newn;
      newn->prev=temp;
        iCount++;
    }
}

void DoublyLL :: InserAtPosition(int no,int iPos)
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
   PNODE temp=NULL;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;
    temp=First;
    for(int iCnt=1;iCnt< iPos-1;iCnt++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next->prev=newn;
    temp->next=newn;
    newn->prev=temp;

    iCount++;
  }
}

void DoublyLL :: DeleteFirst()
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
       First=First->next;
       delete(First->prev);
       First->prev=NULL;
        iCount--;


    }

}

void DoublyLL :: DeleteLast()
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
        
        
        PNODE temp1=First;
        while(temp1->next->next != NULL)
        {
            temp1=temp1->next;
            
        }
       
        delete temp1->next;
        temp1->next=NULL;
        

        iCount--;
    }

}

void DoublyLL :: DeleteAtPosition(int iPos)
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
    

    PNODE temp2=NULL;
    PNODE temp1=First;
    for(int iCnt=1;iCnt< iPos-1;iCnt++)
    {
        temp1=temp1->next;
    }
    temp2=temp1->next;
    temp1->next=temp2->next;

    temp2->next->prev=temp1;

 delete temp2;

    iCount--;
  }

}

void DoublyLL :: Display()
{

    cout<<"Elements of linked list are:"<<"\n";

    //PNODE temp=First;

    cout<<"NULL";
    while((First)!=NULL)
    {
        cout<<"<-|"<<First->data<<"|->";
        First=First->next;
    }
    cout<<"NULL\n";
    
}

int main()
{

DoublyLL obj1;
//SinglyLL obj2;
cout<<sizeof(obj1)<<"\n";
cout<<"First pointer contains:"<<obj1.First<<"\n";
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";

obj1.InserFirst(51);
obj1.InserLast(21);
obj1.InserAtPosition(11,2);
obj1.InserFirst(101);
obj1.InserLast(211);

obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";



obj1.InserAtPosition(111,4);

obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";

obj1.DeleteAtPosition(2);
obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";


    return 0;
}