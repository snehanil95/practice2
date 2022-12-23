//not working
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
void SecMax(PNODE Head)
{
    int i=0,Max=Head->Data,Max2;
    while(Head != NULL)
    {
        
        
            if((Head->Data)>Max)
            {
                Max2=Max;
              Max=Head->Data;
              printf("%d\t",Max);
         }

         else if((Head->Data)>Max && Head->Data !=Max)
        {
           Max2=Head->Data;
           printf("%d",Max2);
        }       
        
        
        Head=Head->next;
    }

   // printf("\nSummation of all even numbers:%d",sum);
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

    SecMax(First);
    return 0;
}
