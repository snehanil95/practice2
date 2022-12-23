#include<stdio.h>

//Display reverse number from given number ex input:5
//output;:4,3,2,1
int DisplayReverse(int iNo)
{
  int iCnt=0;
   //int iMult=1;
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
      
      
      printf("%d\n",iCnt);
  }
    
}
int main()
{
  int iValue=0;
  //int iRet=0;
  printf("enter the number:");
  scanf("%d",&iValue);
  
  
  
  
  printf("-------------------\n");
  DisplayReverse(iValue);
  printf("-------------------");
  return 0;
}