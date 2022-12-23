//perform summation of even elements and odd elelments


#include<stdlib.h>
#include<stdio.h>
void DisplayEvenOddSum(int Arr[],int N)
{
    int iCnt=0;
    int evenSum=0;
int oddSum=0;

for(iCnt=0;iCnt<N;iCnt++)
 {
   if(Arr[iCnt]%2 == 0)
   {
   evenSum=evenSum+Arr[iCnt];
   }
   else
   {
    oddSum=oddSum+Arr[iCnt];
   }
 }
printf("Even Addition:%d",evenSum);
printf("\nOdd Addition:%d",oddSum);


}
int main()
{
 int iSize=0;
int iCnt=0;
int iRet=0.0f;
  printf("Enter the how many elements you want to add in aarry:");
  scanf("%d",&iSize);
  int *Arr=NULL;

  Arr=(int *)malloc(sizeof(int)*iSize);
  printf("Enter the elements of array:\n");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
 scanf("%d",&Arr[iCnt]);
 }

DisplayEvenOddSum(Arr,iSize);
//rintf("Even counr:%d",iRet);

free(Arr);
    return 0;
}