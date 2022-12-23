//maximum number
#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int N)
{

    int iMax=Arr[0];
     int iCnt=0;

     for(iCnt=0;iCnt<N;iCnt++)
     {
            if(Arr[iCnt]>iMax)
            {
        iMax=Arr[iCnt];
            }
     }
     return iMax;
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

    iRet=Maximum(ptr,iSize);

    printf("Maximum number:%d",iRet);




   free(ptr);
    return 0;
}