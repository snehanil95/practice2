//Smallest number


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
    int iMin=First->data;
    while(First!=NULL)
    {
        if(First->data <iMin)
        {
            iMin=First->data;
        }
        
        
        First=First->next;
        
    }
    return iMin;
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
   int iCnt=0,n;
   int Num,i;
   int Arr[10];
    printf("Enter the element you want to add in array:\n");
    scanf("%d",&n);
    printf("Enter the element to add in linked list:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Arr[i]);
    }
   for(iCnt=0;iCnt<n;iCnt++)
   {
    InsertFirst(&Head,Arr[iCnt]);
   }
    //InsertFirst(&Head,21);
    //InsertFirst(&Head,30);
    //InsertFirst(&Head,11);

     Display(Head);
    iRet=Largestele(Head);

    printf("Smallest element are %d",iRet);
    return 0;
}