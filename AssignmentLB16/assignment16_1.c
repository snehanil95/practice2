//check 11 is in aarry or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Occurrance(int Arr[],int N,int num)
{
     int iCnt=0;
     
    for(iCnt=0;iCnt<N;iCnt++)
    {

        if(Arr[iCnt] ==num)
          break;
    }
if(iCnt==N)
 return -1;
 else
    return 1;
}


int main()
{
int iSize=0;
int *ptr=NULL;
int i=0;
bool bRet=0;
int n=0;

printf("How many elements you want to enter in array:");
scanf("%d",&iSize);

ptr=(int *)malloc(sizeof(int)*iSize);

printf("Enter the elements of array:");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }
printf("Enter the number to find occurance:");
scanf("%d",&n);
  bRet=Occurrance(ptr,iSize);
 if(bRet== -1)
  printf("\n%d is not in given Array",n);

  else
  printf("%d is in Array:",n);
    return 0;
}