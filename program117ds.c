//doubly Linear LL
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{

    int data;
    struct node *next;
    struct node *prev; //x
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int Count(PNODE First)
{ 
    int iCnt=0;

    while(First !=NULL)
    {
        iCnt++;
        First=First->next;
        
    }
    return iCnt;
}

void InsertFirst(PPNODE First,int no)
{
    PNODE newn =(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;  //X

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;  //X
        *First=newn;
        newn->prev=NULL; 
    }
}

void InsertLast(PPNODE First,int no)
{
    PNODE newn =(PNODE)malloc(sizeof(NODE));
    PNODE temp=*First;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;  //X

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
       while(temp->next !=NULL)
       {
        temp=temp->next;
       }
       temp->next=newn;
       newn->prev=temp;  //X
    }
}
void Display(PNODE First)
{
    printf("NULL");
   while((First)!=NULL)
   {
    printf("<-|%d|->",First->data);
    First=First->next;
   }
   printf("NULL\n");
}

void DeleteFirst(PPNODE First)
{

   //PNODE temp=NULL;
    if(*First==NULL)
    {
        return;
    }
    else if(((*First)->next)==NULL)
    {
        free(*First);
        *First=NULL;
    }

    else
    {
      *First=(*First)->next;
      free((*First)->prev);
      (*First)->prev=NULL;
    }
}

void DeleteLast(PPNODE First)
{

   PNODE temp=*First;
    if(*First==NULL)
    {
        return;
    }
    else if(((*First)->next)==NULL)
    {
        free(*First);
        *First=NULL;
    }

    else
    {
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}
void DeleteAtPos(PPNODE First,int ipos)
{

    PNODE temp1=NULL;
    int iCnt=0,NodeCnt=0;

    NodeCnt=Count(*First);

    if((ipos<1)||(ipos>NodeCnt))
    {
        printf("Invalide position\n");
        return;
    }

    if(ipos==1)
    {
        DeleteFirst(First);
    }
    else if(ipos==NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        PNODE temp2=NULL;
        temp1=*First;
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp2->next;

       temp2->next->prev=temp1; //X
        free(temp2);
    }

}
void InsertAtPosition(PPNODE First,int no,int iPos)
{
    
PNODE newn=NULL;
PNODE temp=NULL;
int iCnt=0;
int NodeCnt=0;
NodeCnt = Count(*First);

if((iPos <1)||(iPos>(NodeCnt+1)))
{
    printf("Invalid position\n");
    return;
}

if(iPos==1)
{
 InsertFirst(First,no);
}
else if(iPos ==NodeCnt+1)
{
    InsertLast(First,no);
}
else
{
 newn=(PNODE)malloc(sizeof(NODE));  //1 allocate memory
 newn->Data=no;
 newn->next=NULL;

  temp=*First;
 for(iCnt=1;iCnt<iPos-1;iCnt++)
 {
    temp=temp->next;
 }
 newn->next=temp->next;

 temp->next->prev=newn;
 temp->next=newn;
newn->prev=temp;

}
}


int main()
{
    PNODE Head=NULL;
    int iRet=0;
    printf("After using insertfirst\n ");
    InsertFirst(&Head,21);
    InsertFirst(&Head,22);
    InsertFirst(&Head,23);

    Display(Head);

    InsertLast(&Head,121);
    InsertLast(&Head,122);
    printf("After insertLast:\n");
    DeleteFirst(&Head);
    printf("After using DeleteFirst:");
    Display(Head);  
    DeleteLast(&Head);
    printf("After using DeleteLast:");
    Display(Head);
iRet=Count(Head);
printf("Number of nodes=%d",iRet);
}
