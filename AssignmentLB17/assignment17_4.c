#include<stdio.h>
#include<stdlib.h>
void threeDigit(int Arr[],int N)
{
    int Digit=0;
    int iCnt=0;
    int Dcnt=0;
    int DCount1=0;
    int temp=0;
    printf("**");
    for(iCnt=0;iCnt<N;iCnt++)
    {
        Dcnt=0;
        temp=Arr[iCnt];
        while(Arr[iCnt]!=0)
        {
            Digit=Arr[iCnt]%10;
            Dcnt++;
            Arr[iCnt]=Arr[iCnt]/10;
            //printf("%d\n",Dcnt);
            DCount1=Dcnt;
        }
        //printf("%d\n",DCount1);
        if(DCount1==3)
        printf("\n%d",temp);
    }
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
 threeDigit(ptr,iSize);
 
 
 free(ptr);
 return 0;
}