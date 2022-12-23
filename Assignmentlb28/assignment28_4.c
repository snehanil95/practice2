//largest number


#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node * next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{

    PNODE newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }
}
int Count(PNODE First)
{
    int iCnt=0;
    while(First != NULL)
    {
        iCnt++;
        First=First->next;

    }
    return iCnt;
}
int Largestele(PNODE First)
{
    int iMax=0;
    while(First!=NULL)
    {
        if(First->data >iMax)
        {
            iMax=First->data;
        }
        
        
        First=First->next;
        
    }
    return iMax;
}
void Display(PNODE First)
{

    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First=First->next;
    }
    printf("NULL\n");
}
int main()
{

    PNODE Head=NULL;
    int iRet=0;
   int iCnt=0,n=5;
   int Num;
   int Arr[5]={10,20,40,30,50};
   for(iCnt=0;iCnt<n;iCnt++)
   {
    InsertFirst(&Head,Arr[iCnt]);
   }
    //InsertFirst(&Head,21);
    //InsertFirst(&Head,30);
    //InsertFirst(&Head,11);

     Display(Head);
    iRet=Largestele(Head);

    printf("Largest element are %d",iRet);
    return 0;
}