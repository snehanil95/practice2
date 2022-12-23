#include<stdio.h>
int CountofFour(int num)
{
  int iCnt=0;
    int Digit=0;
    while(num!=0)
    {
        Digit=num%10;
        if(Digit==4)
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
 printf(" %d contain frequency of four is:",n1);
 Ret=CountofFour(n1);
 printf("%d",Ret);

    return 0;
}