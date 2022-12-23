
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
void PerfectNum(PNODE Head)
{
    int i=0,sum=0;
    while(Head != NULL)
    {
        sum=0;
        for(i=1;i<(Head->Data);i++)
        {
            if((Head->Data)%i == 0)
            {
              sum=sum+i;
         }
         
        }
        
        if(Head->Data == sum)
        {
            printf("\n%d is perfect number",Head->Data);
        }
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

    PerfectNum(First);
    return 0;
}
