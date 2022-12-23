
//minimum number from given array
#include<stdio.h>
#include<stdlib.h>
int minimum(int Arr[],int N)
{

    int iMin=Arr[0];
     int iCnt=0;

     for(iCnt=0;iCnt<N;iCnt++)
     {
            if(Arr[iCnt]<iMin)
            {
        iMin=Arr[iCnt];
            }
     }
     return iMin;
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int i=0,iRet=0;

    printf("Enter the Size of array:");
    scanf("%d",&iSize);

    ptr=(int *)malloc(sizeof(int)*iSize);

    printf("Enter the elements of aarray:");

    for(i=0;i<iSize;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet=minimum(ptr,iSize);

    printf("Maximum number:%d",iRet);




   free(ptr);
    return 0;
}