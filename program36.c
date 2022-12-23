//input 751
//output: 13

//input 75134
//output: 20

//Addition of digit


int CountEvenDigits(int iNo)
{
    int iDigit=0;
    int iCnt=0;
   // int sum=0;

   if(iNo==0)
   {
    return 1;
   }
 if(iNo<0)
   {

    iNo=-iNo;               //updator
   }
    while(iNo !=0)
    {

       iDigit=iNo%10;
        iNo=iNo/10;
        //sum=sum+iDigit;
        if(iDigit%2==0)
        {
        iCnt++;
        }
    }
    return iCnt;
}


#include<stdio.h>
int main()
{
    int iValue=0;
    int iRet=0;
    
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=CountEvenDigits(iValue);

    printf(" even numbers in digits are:%d",iRet);

    return 0;
}