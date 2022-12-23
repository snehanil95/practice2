//search At last occurance 
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
int SearchLastOcc(PNODE First,int no)
{
    int iCnt=0;
    PNODE temp=First;
    while(First!=NULL)
    {
       
        First=First->next;
        
    
    //printf("%d\n",temp->data);
    //printf("%d\n",First->data);

    for(iCnt=Count(First);iCnt>0;iCnt--)
    {
        if(temp->data == no)
        {
            break;
        }
        
    }
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
   int iCnt=0,n=8;
   int Num;
   
    InsertFirst(&Head,11);
   
    InsertFirst(&Head,21);
    InsertFirst(&Head,30);
    InsertFirst(&Head,11);

     Display(Head);
     printf("Enter the element you want to search:");
     scanf("%d",&Num);
    iRet=SearchLastOcc(Head,Num);
   if(iRet== -1)
   {
    printf("Number is not found\n");

   }
   else
   {
    printf("Last occurence of %d is %d",Num,iRet);
   }
    return 0;
}
