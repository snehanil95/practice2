//Average
#include<stdlib.h>
#include<stdio.h>
float Average(int Arr[],int N)
{
    int iCnt=0;
    int iSum=0;
    float iAvg=0;

for(iCnt=0;iCnt<N;iCnt++)
 {
   iSum=iSum+Arr[iCnt];
 }

iAvg=iSum/ N;
return iAvg;

}
int main()
{
 int iSize=0;
int iCnt=0;
float fRet=0.0f;
  printf("Enter the how many elements you want to add in aarry:");
  scanf("%d",&iSize);
  int *Arr=NULL;

  Arr=(int *)malloc(sizeof(int)*iSize);
  printf("Enter the elements of array:");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
 scanf("%d",&Arr[iCnt]);
 }

fRet=Average(Arr,iSize);
printf("Average:%f",fRet);

free(Arr);
    return 0;
}