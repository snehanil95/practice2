//// Numbers which are divisible by five and three
#include<stdio.h>
#include<stdlib.h>
voif DivisibleByFive(int Arr[],int N)
{
     int iCnt=0;
     
    for(iCnt=0;iCnt<N;iCnt++)
    {

        if(Arr[iCnt]%5 ==0 && Arr[iCnt]%3==0)
         printf("%d",Arr[iCnt]); 
    }

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
printf("\nNumbers which are divisible by Five and three are:");
  iRet=Divisibility(ptr,iSize);

  
  
    return 0;
}