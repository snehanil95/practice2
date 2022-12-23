//input 751
//output: 3

//input 75134
//output: 5

//only for pisitive numbers


int CountDigits(int iNo)
{
    //int iDigit=0;
    int iCnt=0;

    if(iNo==0)              //filter
    {
        return 1;
    }

  if(iNo<0)
   {

    iNo=-iNo;               //updator
   }
    while(iNo >0)
    {

       // iDigit=iNo%10;
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