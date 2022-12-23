//insert and display function
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)


struct node
{

    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    //Allocate the menory for new node

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    //initialise node

    newn->data=No;
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

void Display(PNODE First)
{

  while(First!=NULL)
  {

    printf("|%d|->",First->data);
    First=First->next;
  }
  printf("NULL");
}
int main()
{

  PNODE Head=NULL;

   InsertFirst(&Head,51);
   InsertFirst(&Head,21);
   InsertFirst(&Head,11);

 printf("Content of linklist:\n");
   Display(Head);
}