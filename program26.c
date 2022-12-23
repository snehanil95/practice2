#include<stdio.h>

//non factor
int DisplayNFactor(int iNo)
{
  int iCnt=0;
  
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
  if(iNo%iCnt !=0)
    {
      printf("%d\n",iCnt);
    }
  }

}
int main()
{
  int iValue=0;
  printf("enter the number:");
  scanf("%d",&iValue);
  printf("Non factors of %d are:\n",iValue);
  DisplayNFactor(iValue);
  return 0;
}