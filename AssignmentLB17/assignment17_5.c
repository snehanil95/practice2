#include<stdio.h>
#include<stdlib.h>
void AdditionofDigits(int Arr[],int N)
{
    int Digit=0;
    int iCnt=0;
    int sum=0;
    
    for(iCnt=0;iCnt<N;iCnt++)
    {
       sum=0;
        while(Arr[iCnt]!=0)
        {
            Digit=Arr[iCnt]%10;
            sum=sum+Digit;
            Arr[iCnt]=Arr[iCnt]/10;
            
        }
        printf("%d\n",sum);
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
 printf("Addition of each digit:");
 AdditionofDigits(ptr,iSize);
 
 
 free(ptr);
 return 0;
}