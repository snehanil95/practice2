#include<stdio.h>

int Addition(int iNo)
{
    int iAns=0;
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        iAns=iAns+i;
    }
    return iAns;
}


int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number upto you want to add:");
    scanf("%d",&iValue);

    iRet=Addition(iValue);
    printf("Addition is:%d",iRet);
}