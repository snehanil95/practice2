#include<stdio.h>
void evnFactor(int iNo)
{
 int iCnt;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)&&(iNo%2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    printf("even factors of %d:",iValue);
    evnFactor(iValue);
return 0;
}