//First oCCurance

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
int SearchFirstOcc(PNODE First,int no)
{
    int iCnt=0;
    while(First!=NULL)
    {
        if(First->data == no)
        {
            break;
        }
        
        iCnt++;
        First=First->next;
        
    }
    if(iCnt>Count(First))
    {
        return -1;
    }
    else
    {
    return iCnt;
    }
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
     printf("Enter the element you want to search:");
     scanf("%d",&Num);
    iRet=SearchFirstOcc(Head,Num);
   if(iRet== -1)
   {
    printf("Number is not found\n");

   }
   else{
    printf("First occurence of 21 is %d",iRet);
   }
    return 0;
}