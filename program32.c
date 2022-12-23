#include<stdio.h>

//Display odd factor and reducing time complexity
void DisplayEFactor(int iNo)
{
  int iCnt=0;
  
  for(iCnt=1;iCnt<=(iNo/2);iCnt=iCnt+2)       //icnt+2 not allowed
  {                                             //iCnt+=2
  if (iNo%iCnt ==0)
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
  printf("even factors of %d are:\n",iValue);
  DisplayEFactor(iValue);
  return 0;
}