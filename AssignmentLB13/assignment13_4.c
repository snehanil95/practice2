//Accept the number from user and return multiplication of its  digit
int MultDigit(int N)
{
  int digit,mult=1;
    while(N!=0)
    {

        digit=N%10;
        N=N/10;
        mult=mult*digit;

    }
    return mult;
}
#include<stdio.h>
int main()
{

    int no=0;
    printf("Enter the number:");
    scanf("%d",&no);

    printf("multiplication of digit:%d",MultDigit(no));

    return 0;
}