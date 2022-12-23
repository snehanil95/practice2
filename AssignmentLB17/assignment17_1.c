//largest element of array

#include<stdio.h>
#include<stdlib.h>

int MaxNum(int Arr[],int N)
{

    int iCnt=0;
    int iMax=0;

    for(iCnt=0;iCnt<N;iCnt++)
    {
        if(Arr[iCnt]>=iMax)
         iMax=Arr[iCnt];
    }

    return iMax;
}
int main()
{
int iSize=0;
int *ptr=NULL;
int i=0;
int iRet=0;
int n=0;

printf("How many elements you want to enter in array:");
scanf("%d",&iSize);
ptr=(int *)malloc(sizeof(int)*iSize);

printf("Enter the elements of array:\n");
 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);

 }
 iRet=MaxNum(ptr,iSize);
 if(iRet==1)
 {
    printf("Multiplication is =0");
 }
else
 printf("Maximum element is:%d",iRet);

 return 0;
}