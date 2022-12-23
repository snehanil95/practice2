//maximum digit from number


#include<stdio.h>
int MinDigit(int iNo)
{

    int iCnt=0;
    int iDigit=0;
    int iMin=9;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iCnt++;
        if(iMin>iDigit)
        {
            iMin=iDigit;
        }

        if(iMin==0)  //for reduce time complexity
         break;

        
        
    }
     printf("counter=%d\n",iCnt);
    return iMin;
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=MinDigit(iValue);

    printf("\nNumber of digits are:%d",iRet);

    return 0;
}
