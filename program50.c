//Accept a number from user 

//print index value of that number
#include<stdlib.h>
#include<stdio.h>
int DisplayFreq(int Arr[],int N,int No)
{
    int iCnt=0;
    int Count=0;


for(iCnt=0;iCnt<N;iCnt++)
 {
   if(Arr[iCnt] == No)
   break;
  
 }
if(iCnt==N)
{
    return -1;
}
else
return iCnt;

}
int main()
{
 int iSize=0;
int iCnt=0;
int iRet=0;
int iFreq=0;
  printf("Enter the how many elements you want to add in aarry:");
  scanf("%d",&iSize);
  int *Arr=NULL;

  Arr=(int *)malloc(sizeof(int)*iSize);
  printf("Enter the elements of array:\n");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
 scanf("%d",&Arr[iCnt]);
 }
printf("Enter the number you want to check index of first occurence:");
scanf("%d",&iFreq);
iRet=DisplayFreq(Arr,iSize,iFreq);


if(iRet == -1)
{
    printf("invalid index");
}
else{
    printf("%d number occured at index %d",iFreq,iRet);
}

free(Arr);
    return 0;
}