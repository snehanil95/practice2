//doubly Linear LL
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{

    int data;
    struct node *next;
    struct node *prev; //x
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int Count(PNODE First,PNODE Last)
{ 
    int iCnt=0;

   
    do
    {
        iCnt++;
        First=First->next;
        
    } while(First != Last->next);
    return iCnt;
}

void InsertFirst(PPNODE First,PPNODE Last,int no)
{
    PNODE newn =(PNODE)malloc(sizeof(NODE));
    
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;  //X

    if((*First==NULL) &&(*Last==NULL))
    {
        *First=newn;
        *Last=newn;
        (*First)->prev=newn;
        //newn->next=newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->prev=(*Last);
        newn->next=*First;
        
       (*First)->prev=newn;
       //(*Last)->next=newn;
       
        *First=newn;
        *Last=newn->prev;
        (*Last)->next = newn;
    }
}

void InsertLast(PPNODE First,PPNODE Last,int no)
{
    PNODE newn =(PNODE)malloc(sizeof(NODE));
    PNODE temp=*First;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;  //X

    if(*First==NULL)
    {
        *First=newn;
        *Last=newn;
    }
    else
    {
      
       
       newn->prev=*Last;  //X
       newn->next=*First;
       (*Last)->next=newn;
       (*First)->prev=newn;
       *Last=newn;
       
    }
}
void Display(PNODE First,PNODE Last)
{
    //printf("NULL");
   // PNODE temp=First;
   
   
    do
   {
    printf("<-|%d|->",First->data);
    First=First->next;
   }
    while(First!=(Last->next));
  
   
  // printf("NULL\n");
}

void DeleteFirst(PPNODE First,PPNODE Last)
{

   //PNODE temp=NULL;
    if((*First==NULL) && (*Last==NULL))
    {
        return;
    }
    else if(((*First)->next)==NULL)
    {
        free(*First);
        *First=NULL;
        
        free(*Last);
        *Last=NULL;
    }

    else
    {
      *First=(*First)->next;
      (*Last)->next=(*First);
      
      free((*First)->prev);
      (*First)->prev=*Last;
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{

   PNODE temp=*First;
    if((*First==NULL) && (*Last==NULL))
    {
        return;
    }
    else if(((*First)->next)==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }

    else
    {
        while(temp->next->next != (*First))
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=*First;
        *Last=temp->prev;
    }
}
void DeleteAtPos(PPNODE First,PPNODE Last,int ipos)
{

    PNODE temp1=NULL;
    int iCnt=0,NodeCnt=0;

    NodeCnt=Count(*First,*Last);

    if((ipos<1)||(ipos>NodeCnt))
    {
        printf("Invalide position\n");
        return;
    }

    if(ipos==1)
    {
        DeleteFirst(First,Last);
    }
    else if(ipos==NodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        PNODE temp2=NULL;
        temp1=*First;
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp2->next;

       temp2->next->prev=temp1; //X
        free(temp2);
    }

}
void InsertAtPosition(PPNODE First,PPNODE Tail,int no,int iPos)
{
    
PNODE newn=NULL;
PNODE temp=NULL;
int iCnt=0;
int NodeCnt=0;
NodeCnt = Count(*First,*Tail);

if((iPos <1)||(iPos>(NodeCnt+1)))
{
    printf("Invalid position\n");
    return;
}

if(iPos==1)
{
 InsertFirst(First,Tail,no);
}
else if(iPos ==NodeCnt+1)
{
    InsertLast(First,Tail,no);
}
else
{
 newn=(PNODE)malloc(sizeof(NODE));  //1 allocate memory
 newn->data=no;
 newn->next=NULL;

  temp=*First;
 for(iCnt=1;iCnt<iPos-1;iCnt++)
 {
    temp=temp->next;
 }
 newn->next=temp->next;

 temp->next->prev=newn;
 temp->next=newn;
newn->prev=temp;

}
}


int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iRet=0;
    printf("After using insertfirst\n ");
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,22);
    InsertFirst(&Head,&Tail,23);

    Display(Head,Tail);
    printf("\n");
    
    iRet=Count(Head,Tail);
printf("\nNumber of nodes=%d",iRet);
 printf("\n");
    
   InsertLast(&Head,&Tail,121);
    InsertLast(&Head,&Tail,122);
    printf("\nAfter insertLast:\n");
     Display(Head,Tail);  
      printf("\n");
     printf("\n");
    
      iRet=Count(Head,Tail);
printf("\nNumber of nodes=%d",iRet);
 printf("\n");
     printf("\n");
    
    DeleteFirst(&Head,&Tail); printf("\n");
    
    printf("\nAfter using DeleteFirst:\n");
    Display(Head,Tail);  
     printf("\n");
     printf("\n");
    
   DeleteLast(&Head,&Tail);
    printf("\nAfter using DeleteLast:\n");
    Display(Head,Tail);


}
