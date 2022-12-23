//Accept a number from user 

//chk number is availbale in aaray
//time complexity :best case 1
//worst case:n
//avergr case in between 0 to n

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
bool chkNum(int Arr[],int N,int No)
{
    int iCnt=0;
    //int Count=0;
    bool flag=false;


for(iCnt=0;iCnt<N;iCnt++)
 {
   if(Arr[iCnt] == No)
   {
        flag=true;
        break;

   }
   else
   {
    flag=false;
   }
  
 }

return flag;

}
int main()
{
 int iSize=0;
int iCnt=0;
bool bRet=false;
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
printf("Enter the number you want to check:");
scanf("%d",&iFreq);
bRet=chkNum(Arr,iSize,iFreq);
if(bRet==true)
{
    printf("Number is available");
}
else
{
printf("Number is not available:");
}
free(Arr);
    return 0;
}