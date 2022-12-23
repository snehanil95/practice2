#include<stdio.h>

//non factor input:6
//output:4,5

int AdditionNFactor(int iNo)
{
  int iCnt=0;
   int iSum=0;
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
  if(iNo%iCnt !=0)
    {
      //printf("%d\n",iCnt);
      iSum=iSum+iCnt;
    }
  }
    return iSum;
}
int main()
{
  int iValue=0;
  int iRet=0;
  printf("enter the number:");
  scanf("%d",&iValue);
  
  
  iRet=AdditionNFactor(iValue);
  printf("Addition of Non factors of %d are:%d\n",iValue,iRet);
  return 0;
}