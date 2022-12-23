#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InserFirst(PPNODE First,PPNODE Last,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First==NULL)&&(*Last==NULL))
    {
         *First=newn;
        *Last=newn;
        
       
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;
  
 }
    (*First)->prev=*Last;
  (*Last)->next=*First;
       
}
void InserLast(PPNODE First,PPNODE Last,int no)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First==NULL)&&(*Last==NULL))
    {
         *First=newn;
        *Last=newn;
        
    }
    else
    {
    (*Last)->next=newn;
    newn->prev=*Last;
    *Last=newn;

    }
    (*First)->prev=*Last;
  (*Last)->next=*First;
       
}
void Display(PNODE First,PNODE Last)
{
    if((First==NULL)&&(Last==NULL))
    {
        printf("Linked list is empty");
        return ;
    }
    printf("Elements of linkedList:\n");
    do
    {
        printf("|%d|<=>",First->data);
        First=First->next;
    }
    while(First!=Last->next);

    printf("\n");
}

int Count(PNODE First,PNODE Last)
{
    int iCnt=0;

if((First==NULL)&&(Last==NULL))
    {
        printf("Linked list is empty");
        return 0;
    }
    
    do
    {
        iCnt++;
        First=First->next;
    }
    while(First!=Last->next);

   return iCnt;

}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if((*First==NULL)&&(*Last==NULL))
    {
        return;
    }
    else if(*First==*Last)
    {
        free(*First);

        *First=NULL;
        *Last=NULL;

    }
    else{

        *First=(*First)->next;
        free((*Last)->next);    //free(*First)->prev;

    (*First)->prev=*Last;
    (*Last)->next=*First;
    }
   
   
}
void DeleteLast(PPNODE First,PPNODE Last)
{
    if((*First==NULL)&&(*Last==NULL))
    {
        return;
    }
    else if(*First==*Last)
    {
        free(*Last);

        *First=NULL;
        *Last=NULL;

    }
    else{
        (*Last)=(*Last)->prev;
        free((*First)->prev);   //free(*Last)->next;
        

(*First)->prev=*Last;
  (*Last)->next=*First;
    }


}

void InsertAtPosition(PPNODE First,PPNODE Last,int no ,int ipos)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    PNODE temp=NULL;
 int iCnt=0;
    int iNodeCount=Count(*First,*Last);

    if((ipos <1 )||(ipos>iNodeCount+1))
    {
        printf("Invalid position");
        return ;
    }
    if(ipos==1)
    {
        InserFirst(First,Last,no);
    }
 else if(ipos==iNodeCount+1)
    {
        InserLast(First,Last,no);
    }
    else{
        newn->data=no;
        newn->prev=NULL;
        newn->next=NULL;

        temp=*First;

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

  
void DeleteAtPosition(PPNODE First,PPNODE Last,int ipos)
{
    //PNODE newn=(PNODE)malloc(sizeof(NODE));
    PNODE temp=NULL;
  int iCnt=0;
    int iNodeCount=Count(*First,*Last);

    if((ipos <1 )||(ipos>iNodeCount))
    {
        printf("Invalid position");
        return ;
    }
    if(ipos==1)
    {
        DeleteFirst(First,Last);
    }
 else if(ipos==iNodeCount+1)
    {
        DeleteLast(First,Last);
    }
    else{
        
         temp=*First;

        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
    temp->next=temp->next->next;
    free(temp->next->prev);
        temp->next->prev=temp;

        
    }
}

  
    int main()
{
int iRet=0;
PNODE Head=NULL;
PNODE Tail=NULL;

InserFirst(&Head,&Tail,51);
InserFirst(&Head,&Tail,21);
InserFirst(&Head,&Tail,11);

InserLast(&Head,&Tail,100);
InserLast(&Head,&Tail,1010);
InserLast(&Head,&Tail,1020);


Display(Head,Tail);
iRet=Count(Head,Tail);

printf("number of nodes:%d\n",iRet);

InsertAtPosition(&Head,&Tail,120,5);

Display(Head,Tail);
iRet=Count(Head,Tail);
printf("number of nodes:%d",iRet);
DeleteAtPosition(&Head,&Tail,5);
DeleteFirst(&Head,&Tail);
DeleteLast(&Head,&Tail);

Display(Head,Tail);
iRet=Count(Head,Tail);
printf("number of nodes:%d",iRet);




    return 0;
}