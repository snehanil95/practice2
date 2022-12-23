#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{

    int data;
    struct node *next;
};
int main()
{

  //struct node *Head=NULL;

  struct node *newn=(struct node *)malloc(sizeof(struct node));

  newn->data=11;
  newn->next=NULL;

 printf("%d\n",newn->data);
 printf("Size of structure:%d",sizeof(struct node));
    return 0;
}