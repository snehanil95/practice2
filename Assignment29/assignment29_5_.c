#include<stdio.h>
#include<stdlib.h>
struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->next=NULL;
    newn->Data=no;

    if(*Head == NULL)
    {
        *Head=newn;
    }

    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}
void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("|%d|->",Head->Data);
        Head=Head->next;
    }
    printf("NULL\n");
}
void AddEven(PNODE Head)
{
    int i=0,sum=0;
    int Digit=0;
    while(Head != NULL)
    {
        sum=0;
      while(Head->Data !=0)
      {
        Digit=(Head->Data)%10;
        sum=sum+Digit;
        Head->Data=Head->Data/10;
       
      }  
      printf("\nSummation of digit:%d\n",sum);
        Head=Head->next;
    }

    
    
}
int main()
{  
    PNODE First=NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,6);
    InsertFirst(&First,21);
    InsertFirst(&First,28);
    InsertFirst(&First,121);
    InsertFirst(&First,151);

    Display(First);

    AddEven(First);
    return 0;
}
