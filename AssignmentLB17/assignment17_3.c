//difference between small and largest element of array

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int N)
{

    int iCnt=0;
    int iMax=0;
    int iCnt1=0;
    int iMin=Arr[0];
    for(iCnt=0;iCnt<N;iCnt++)
    {
        if(Arr[iCnt]>iMax)
         iMax=Arr[iCnt];
    }

    for(iCnt1=0;iCnt1<N;iCnt1++)
    {
        if(Arr[iCnt1]<iMin)
         iMin=Arr[iCnt1];
    }

    return iMax-iMin;
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
 iRet=Difference(ptr,iSize);
 
 printf("difference between max and min element is:%d",iRet);
 free(ptr);
 return 0;
}
