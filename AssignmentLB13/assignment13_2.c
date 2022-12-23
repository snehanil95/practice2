//Accept the number from user and count its odd digit
int countOdd(int N)
{
  int digit,cnt=0;
    while(N!=0)
    {

        digit=N%10;
        N=N/10;
        if(digit %2 != 0)
        {
            cnt++;
        }

    }
    return cnt;
}
#include<stdio.h>
int main()
{

    int no=0;
    printf("Enter the number:");
    scanf("%d",&no);

    printf("odd digit count:%d",countOdd(no));

    return 0;
}