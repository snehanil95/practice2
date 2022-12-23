//practice

#include<stdio.h>
#include<stdlib.h>
struct node
{
  int no1;
  struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
void InsertFirst(PPNODE First,int no)
{
    
    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->no1=no;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
     }
}
void InsertLast(PPNODE First,int no)
{
    
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    PNODE temp=NULL;
    temp=*First;
    newn->no1=no;
    newn->next=NULL;

    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
            temp->next=newn;
    }

}
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\t",First->no1);
        First=First->next;

    }
    printf("\n");
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
        free(First);
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

 InsertFirst(&Head,21);
 InsertFirst(&Head,21);
 InsertFirst(&Head,21);
 
 Display(Head);
 InsertLast(&Head,32);
 Display(Head);

 DeleteLast(&Head);
 Display(Head);
    return 0;
}