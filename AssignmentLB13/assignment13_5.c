//Accept the number from user and write difference between sumationof
// its even and odd digit
#include<stdio.h>
int sumDif(int N)
{
  int digit,sumEven=0,sumOdd=0;
    while(N!=0)
    {

        digit=N%10;
        N=N/10;
        if(digit %2 == 0)
        {
            sumEven=sumEven+digit;
        }
        if(digit %2 != 0)
        {
            sumOdd=sumOdd+digit;
        }

    }
    printf("\nsum of even %d",sumEven);
    printf("\nsum of odd %d",sumOdd);
    return sumEven-sumOdd;
}

int main()
{

    int no=0;
    printf("Enter the number:");
    scanf("%d",&no);

    printf("\nDifference between sum of even and odd digits:%d",sumDif(no));

    return 0;
}