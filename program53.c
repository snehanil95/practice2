//reverse order display
#include<stdio.h>
#include<stdlib.h>
void DisplayRev(int Arr[],int N)
{

    int iCnt=0;
    for(iCnt=N-1;iCnt>=0;iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
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
 printf("Elements in reverse order:\n");
    DisplayRev(ptr,iSize);



   free(ptr);
    return 0;
}