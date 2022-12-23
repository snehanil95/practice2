#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
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
    newn->data=no;

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
void productDig(PNODE Head)
{
    PNODE temp=Head;

    while(temp != NULL)
    {
        int n=temp->data;
    int Digit=0;
    int mult=1;
   // printf("%d",n);
        while(temp->data != 0)
        {
             Digit=temp->data%10;
             if(Digit==0)
             {
                Digit=1;
             }
             mult=mult*Digit;
             
            temp->data=temp->data/10;
           // printf("%d",Digit);
            
        }
        printf("%d",mult);
        printf("|->|");
        
        temp=temp->next;
    }
}



void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
}

int main()
{
PNODE First=NULL;

InsertFirst(&First,101);
InsertFirst(&First,51);
InsertFirst(&First,11);

Display(First);
printf("\n|");
//Reverse(First);
printf("\n");
productDig(First);

    return 0;
}