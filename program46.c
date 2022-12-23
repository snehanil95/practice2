//print even and odd number from Array
#include<stdlib.h>
#include<stdio.h>
void DisplayEvenOddCnt(int Arr[],int N)
{
    int iCnt=0;
    int evenCount=0;
int oddCnt=0;

for(iCnt=0;iCnt<N;iCnt++)
 {
   if(Arr[iCnt]%2 == 0)
   evenCount++;
   else
   {
    oddCnt++;
   }
 }
printf("Even count:%d",evenCount);
printf("\nOdd count:%d",oddCnt);


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

DisplayEvenOddCnt(Arr,iSize);
//rintf("Even counr:%d",iRet);

free(Arr);
    return 0;
}