#include<stdio.h>
int CountofTwoDigit(int num)
{
  int iCnt=0;
    int Digit=0;
    while(num!=0)
    {
        Digit=num%10;
        if(Digit==2)
        {
            iCnt++;
        }
        num=num/10;
       // printf("%d\n",Digit);
    }
    return iCnt;
}
int main()
{
 int n1;
int Ret=0;
 printf("Enter the Number:");
 scanf("%d",&n1);
 printf(" %d contain count of two is:",n1);
 Ret=CountofTwoDigit(n1);
 printf("%d",Ret);

    return 0;
}