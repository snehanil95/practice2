//digit contain zero or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL chkZeroDigit(int num)
{
    int cnt=0;
    int Digit=0;
    while(num!=0)
    {
        
        Digit=num%10;
        if(Digit == 0)
        {
            return TRUE;
        }
    num=num/10;
        }
   
}
int main()
{
 int n1;
 BOOL bRet=FALSE;
 printf("Enter the Number:");
 scanf("%d",&n1);
 //printf("there is %d 0 in digit of number: ");
  bRet=chkZeroDigit(n1);

    if(bRet==TRUE)
    {
        printf("There is zero in given number");
    }
    else
    printf("There is no zero in given number");

    return 0;
}