//count of digits less than 6


#include<stdio.h>
int Count(int num)
{
  int iCnt=0;
    int Digit=0;
    while(num!=0)
    {
        Digit=num%10;
        if(Digit<6)
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
 printf(" %d contain count of less than 6 is:",n1);
 Ret=Count(n1);
 printf("%d",Ret);

    return 0;
}