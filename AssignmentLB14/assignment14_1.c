////difference between summation even of  numbers and odd numbers from aarry
#include<stdio.h>
#include<stdlib.h>
int sumDiff(int Arr[],int N)
{
     int iCnt=0;
     int evenSum=0;
     int oddSum=0;
    for(iCnt=0;iCnt<N;iCnt++)
    {

        if(Arr[iCnt]%2 ==0)
          
          evenSum=evenSum+Arr[iCnt];

        else
        {
            oddSum+=Arr[iCnt];
        }
    }

    return evenSum-oddSum;
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

  iRet=sumDiff(ptr,iSize);

  printf("Difference between  even and odd  element in Array :%d",iRet);
    return 0;
}