//count No numbers from aarry return its frequency
#include<stdio.h>
#include<stdlib.h>
int countNo(int Arr[],int N,int No)
{
     int iCnt=0;
     int NoCnt=0;
    for(iCnt=0;iCnt<N;iCnt++)
    {

        if(Arr[iCnt] ==No)
          NoCnt++;
    }

    return NoCnt;
}


int main()
{
int iSize=0;
int *ptr=NULL;
int i=0;
int iRet=0;
int Num=0;

printf("How many elements you want to enter in array:");
scanf("%d",&iSize);

ptr=(int *)malloc(sizeof(int)*iSize);

printf("Enter the elements of array:");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }

printf("Enter thenumber to check its freaquency:");
scanf("%d",&Num);
  iRet=countNo(ptr,iSize,Num);

  printf("Number %d  in Array :%d times",Num,iRet);
    return 0;
}