#include<stdio.h>
void Display(int iNo,int N)
{
  int iCnt=0;
  for(iCnt=0;iCnt<N;iCnt++)
  {
    printf("%d\t",iNo);
  }
}

int main()
{
  int iValue=0,iFreq=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    printf("Enter the frequency:");
    scanf("%d",&iFreq);
    
       
    Display(iValue,iFreq);

    return 0;
}