#include<stdio.h>

//Tables input:5
//output:5 10 15 20 25 30 35 40 45 50
int DisplayTables(int iNo)
{
  int iCnt=0;
   //int iMult=1;
  for(iCnt=1;iCnt<=10;iCnt++)
  {
      
      
      printf("%d\n",iNo*iCnt);
  }
    
}
int main()
{
  int iValue=0;
  //int iRet=0;
  printf("enter the number:");
  scanf("%d",&iValue);
  
  
  
  printf("-------------------\n");
  printf("table of %d are:\n",iValue);
  printf("-------------------\n");
  DisplayTables(iValue);
  printf("-------------------");
  return 0;
}