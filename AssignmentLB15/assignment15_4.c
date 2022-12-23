//count 11 numbers from aarry return its frequency
#include<stdio.h>
#include<stdlib.h>
int countEle(int Arr[],int N)
{
     int iCnt=0;
     int eleCnt=0;
    for(iCnt=0;iCnt<N;iCnt++)
    {

        if(Arr[iCnt] ==11)
          eleCnt++;
    }

    return eleCnt;
}


int main()
{
int iSize=0;
int *ptr=NULL;
int i=0;
int iRet=0;

printf("How many elements you want to enter in array:");
scanf("%d",&iSize);

ptr=(int *)malloc(sizeof(int)*iSize);

printf("Enter the elements of array:");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }

  iRet=countEle(ptr,iSize);

  printf("Number of 11 element in Array :%d",iRet);
    return 0;
}