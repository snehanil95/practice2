// ilast occurance index is in aarry 
#include<stdio.h>
#include<stdlib.h>

int Occurrance(int Arr[],int N,int num)
{
     int iCnt=0;
     
    for(iCnt=N;iCnt>=0;iCnt--)
    {

        if(Arr[iCnt] ==num)
          break;
    }
if(iCnt==N)
 return -1;
 else
    return iCnt;
}


int main()
{
int iSize=0;
int *ptr=NULL;
int i=0;
int bRet=0;
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
  bRet=Occurrance(ptr,iSize,n);
 if(bRet== -1)
  printf("\n%d is not in given Array",n);

  else
  printf("%d LAST occured index  %d:",n,bRet);
    return 0;
}