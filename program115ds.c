#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{

    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
 PNODE newn=(PNODE)malloc(sizeof(NODE));  //1 allocate memory

 newn->Data=no;
 newn->next=NULL;

 if(*First ==NULL)   //linklist is empty
 {
    *First=newn;
 }

else   //at leat one node
{
  newn->next=*First;
  *First=newn;    //changing value of head through first
}

}
void InsertLast(PPNODE First,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));  //1 allocate memory

    PNODE temp=*First;
    newn->Data=no;
    newn->next=NULL;

if(*First ==NULL)   //linklist is empty
 {
    *First=newn;
 }

else   //at leat one node
{
   while(temp->next !=NULL)
   { 
     temp=temp->next;
   }
    temp->next=newn;
}


}
int Count(PNODE First)
{
    int iCnt=0;

    while(First!=NULL)
    {
        iCnt++;
        First=First->next;
    }
    return iCnt;
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

 //temp->next->prev=newn;
 temp->next=newn;
//newn->prev=temp;

}
}


void Display(PNODE First)
{
    printf("Elements from linkedlist are:\n");

    while(First!=NULL)
    {

        printf("|%d|->",First->Data);
        First=First->next;
    }
    printf("NULL\n");
}

void DeleteFirst(PPNODE First)
{
    PNODE temp=*First;
    if(*First==NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        (*First)=(*First)->next;
        free(temp);

    }
}

void DeleteLast(PPNODE First)
{

    PNODE temp=*First;
    if(*First==NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
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
int main()
{

   PNODE Head=NULL;
   int iRet=0,iRet1=0,iRet2=0;

   InsertFirst(&Head,51);
   InsertFirst(&Head,21);
   InsertFirst(&Head,11);
    Display(Head);
 iRet=Count(Head);
  printf("Number of nodes are %d\n",iRet);
InsertAtPosition(&Head,44,4);
InsertLast(&Head,101);
InsertLast(&Head,111);
    Display(Head);
 iRet1=Count(Head);
  printf("Number of nodes are %d\n",iRet1);
DeleteFirst(&Head);
 Display(Head);
 iRet2=Count(Head);
  printf("Number of nodes are %d\n",iRet2);

  DeleteLast(&Head);
 Display(Head);
 iRet2=Count(Head);
  printf("Number of nodes are %d\n",iRet2);



    return 0;
}