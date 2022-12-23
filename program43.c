#include<stdio.h>
#include<stdlib.h>

int Arrayaddition(int iArr[],int iN)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iN;iCnt++)
   {
    iSum=iSum+iArr[iCnt];
   }
   return iSum;
}


int main()
{
   int iSize=0;
   int iCnt=0;
    int iRet=0;
   printf("Enter the size of element:\n");
   scanf("%d",&iSize);

   int *Arr=NULL;
   Arr=(int *)malloc(sizeof(int)*iSize);

   printf("Enter the element in array\n:");

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
    scanf("%d",&Arr[iCnt]);
   }

 printf("\n the element in array:\n");

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
    printf("%d\n",Arr[iCnt]);
   }

 iRet=Arrayaddition(Arr,iSize);
 printf("Addition of numbers in Array:%d",iRet);

    free(Arr);
   
    return 0;
}