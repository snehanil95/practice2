#include<iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node * prev;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCL();

        void InserFirst(int no);
        void InserLast(int no);
        void InsertAtPosition(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
        int Count();  
};
DoublyCL ::DoublyCL()
{
    First=NULL;
    Last=NULL;
}

void DoublyCL :: InserFirst(int no)
{
    PNODE newn=new NODE;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL)&&(Last==NULL))
    {
         First=newn;
        Last=newn;
        
       
    }
    else
    {
        newn->next=First;
        (First)->prev=newn;
        First=newn;
  
 }
    (First)->prev=Last;
  (Last)->next=First;
       
}
void DoublyCL ::InserLast(int no)
{
    PNODE newn=new NODE;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL)&&(Last==NULL))
    {
         First=newn;
        Last=newn;
        
    }
    else
    {
    (Last)->next=newn;
    newn->prev=Last;
    Last=newn;

    }
    (First)->prev=Last;
  (Last)->next=First;
       
}
void DoublyCL :: Display()
{
    PNODE temp=First;
    if((First==NULL)&&(Last==NULL))
    {
        cout<<"Linked list is empty"<<"\n";
        return ;
    }
    cout<<"Elements of linkedList:\n"<<"\n";
    do
    {
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    while(temp!=Last->next);

    cout<<"\n";
}

int DoublyCL :: Count()
{
    int iCnt=0;
PNODE temp=First;
if((First==NULL)&&(Last==NULL))
    {
        printf("Linked list is empty");
        return 0;
    }
    
    do
    {
        iCnt++;
        temp=temp->next;
    }
    while(temp!=Last->next);

   return iCnt;

}

void DoublyCL :: DeleteFirst()
{
    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete First;

        First=NULL;
        Last=NULL;

    }
    else{

        First=(First)->next;
         delete (Last)->next;    //free(First)->prev;

    (First)->prev=Last;
    (Last)->next=First;
    }
   
   
}
void DoublyCL :: DeleteLast()
{
    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete Last;

        First=NULL;
        Last=NULL;

    }
    else{
        (Last)=(Last)->prev;
        delete (First)->prev;   //free(Last)->next;
        

(First)->prev=Last;
  (Last)->next=First;
    }


}

void DoublyCL :: InsertAtPosition(int no ,int ipos)
{
    PNODE newn=new NODE;
    PNODE temp=NULL;
 int iCnt=0;
    int iNodeCount=Count();

    if((ipos <1 )||(ipos>iNodeCount+1))
    {
        cout<<"Invalid position";
        return ;
    }
    if(ipos==1)
    {
        InserFirst(no);
    }
 else if(ipos==iNodeCount+1)
    {
        InserLast(no);
    }
    else{
        newn->data=no;
        newn->prev=NULL;
        newn->next=NULL;

        temp=First;

        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;

        temp->next=newn;
        newn->prev=temp;
    }
}

  
void DoublyCL :: DeleteAtPosition(int ipos)
{
    //PNODE newn=(PNODE)malloc(sizeof(NODE));
    PNODE temp=NULL;
  int iCnt=0;
    int iNodeCount=Count();

    if((ipos <1 )||(ipos>iNodeCount))
    {
        cout<<"Invalid position\n";
        return ;
    }
    if(ipos==1)
    {
        DeleteFirst();
    }
 else if(ipos==iNodeCount+1)
    {
        DeleteLast();
    }
    else{
        
         temp=First;

        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
    temp->next=temp->next->next;
    delete temp->next->prev;
        temp->next->prev=temp;

        
    }
}

  
    int main()
{
int iRet=0;

DoublyCL obj;

obj.InserFirst(51);
obj.InserFirst(21);
obj.InserFirst(11);

obj.InserLast(100);
obj.InserLast(1010);
obj.InserLast(1020);


obj.Display();
iRet=obj.Count();

cout<<"number of nodes:\n"<<iRet;

obj.InsertAtPosition(120,5);

obj.Display();
iRet=obj.Count();
cout<<"number of nodes:\n"<<iRet;
obj.DeleteAtPosition(5);
obj.DeleteFirst();
obj.DeleteLast();

obj.Display();
iRet=obj.Count();
cout<<"number of nodes:\n"<<iRet;




    return 0;
}