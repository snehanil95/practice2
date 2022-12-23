//4
//* * * *


#include<stdio.h>
void Display(int N)
{
    int iCnt=0;
    if(N<0)
    {
        N=-N;
    }

    for(iCnt=1;iCnt<=N;iCnt++)
    {
        printf("*\t"); 
    }
printf("\n");

}
int main()
{
  int iNo;
  printf("Enter the number:\n");
  scanf("%d",&iNo);

  Display(iNo);


    return 0;
}