//Accept the number from user and count between 3 to 7 in its digit
int countRange(int N)
{
  int digit,cnt=0;
    while(N!=0)
    {

        digit=N%10;
        N=N/10;
        if(digit==4 || digit==5 || digit==6 )       
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

    printf("number of digit in between 3 to 7 count:%d",countRange(no));

    return 0;
}