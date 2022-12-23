#include<stdio.h>

//Display reverse number from given number by using while loop ex input:5
//output;:4,3,2,1
int DisplayReverse(int iNo)
{
  int iCnt=iNo;
   //int iMult=1;
  while(iCnt>=1)
  {
      
      
      printf("%d\t",iCnt);
      iCnt--;
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
  printf("\n-------------------");
  return 0;
}