#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkeven(int iNo)
{

    if(iNo%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=0;
 printf("Enter the number:");
scanf("%d",&iValue);
    
   bRet=chkeven(iValue);   

    if(bRet==1)
     printf("%d is even",iValue);
     else
      printf("%d is odd",iValue);
    return 0;
}