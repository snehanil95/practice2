#include<stdio.h>
void RevDigit(int num)
{

    int Digit=0;
    while(num!=0)
    {
        Digit=num%10;
        num=num/10;
        printf("%d\n",Digit);
    }
}
int main()
{
 int n1;

 printf("Enter the Number:");
 scanf("%d",&n1);
 printf("digit of number in reverse order:");
 RevDigit(n1);

    return 0;
}