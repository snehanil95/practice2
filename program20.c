#include<stdio.h>
int Factrorial(int n)
{
    int i=1;
    int fact=1;
    for(i=1;i<=n;i++)
    {

        fact=fact*i;
    }
    return fact;
}
int main()
{
    int iAns=0;
   unsigned long int iNo=0;
    printf("enter the num:");
    scanf("%d",&iNo);
    iAns=Factrorial(iNo);
    printf("Factrorial %d of %d is",iNo,iAns);

    return 0;
}