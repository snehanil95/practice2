//last occurance display
#include<stdio.h>
#include<stdlib.h>
int DisplayRev(int Arr[],int N,int No)
{

    int iCnt=0;
    for(iCnt=N-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==No)
        break;
    }
    
    return iCnt;
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int i=0,num=0;
    int iRet=0;


    printf("Enter the Size of array:");
    scanf("%d",&iSize);

    ptr=(int *)malloc(sizeof(int)*iSize);

    printf("Enter the elements of aarray\n:");

    for(i=0;i<iSize;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the number to search:");
    scanf("%d",&num);
// printf("Elements in reverse order:\n");
   iRet= DisplayRev(ptr,iSize,num);

printf("%d occuered at last index %d",num,iRet);

   free(ptr);
    return 0;
}