//input 751
//output: 3

//input 75134
//output: 5

//work for both positive and negative

int CountDigits(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while(iNo !=0)
    {

        iDigit=iNo%10;
        iNo=iNo/10;
        iCnt++;
    }
    return iCnt ;
}


#include<stdio.h>
int main()
{
    int iValue=0;
    int iRet=0;
    
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);

    printf("Number of digits are:%d",iRet);

    return 0;
}