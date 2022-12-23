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
    while(Head != NULL)
    {
        
        
            if((Head->Data)%2 == 0)
            {
              sum=sum+(Head->Data);
              //printf("%d\n",sum);
             // printf("%d",Head->Data);
         }
         
               
        
        Head=Head->next;
    }

    printf("\nSummation of all even numbers:%d",sum);
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
