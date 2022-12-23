//count even numbers from aarry
#include<stdio.h>
#include<stdlib.h>
int counEven(int Arr[],int N)
{
     int iCnt=0;
     int evenCnt=0;
    for(iCnt=0;iCnt<N;iCnt++)
    {

        if(Arr[iCnt]%2 ==0)
          evenCnt++;
    }

    return evenCnt;
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

  iRet=counEven(ptr,iSize);

  printf("Number of even element in Array :%d",iRet);
    return 0;
}