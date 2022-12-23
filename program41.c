//maximum digit from number


#include<stdio.h>
int MaxDigit(int iNo)
{

    int iCnt=0;
    int iDigit=0;
    int iMax=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iCnt++;
        if(iMax<iDigit)
        {
            iMax=iDigit;
        }

        if(iMax==9)  //for reduce time complexity
         break;

        
        
    }
     printf("counter=%d\n",iCnt);
    return iMax;
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=MaxDigit(iValue);

    printf("\nNumber of digits are:%d",iRet);

    return 0;
}