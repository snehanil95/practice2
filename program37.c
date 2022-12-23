//input 751
//output: 13

//input 75134
//output: 20

//count even and odd digit

#include<stdio.h>
void CountEvenOddDigits(int iNo)
{
    int iDigit=0;
    int evenCnt=0;
    int oddCnt=0;
   // int sum=0;

   
 if(iNo==0)
   {

    //printf("Even number is 1\n");
    //printf("odd number is 0");
    //return;
    evenCnt++;             //updator
   }
    while(iNo !=0)
    {

       iDigit=iNo%10;
        iNo=iNo/10;
        //sum=sum+iDigit;
        if(iDigit%2==0)
        {
        evenCnt++;
        }
        else 
        oddCnt++;
    }
    printf("even coun of digit:%d\n",evenCnt);
    printf("odd count of digit:%d\n",oddCnt);
    
}



int main()
{
    int iValue=0;
    
    
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    CountEvenOddDigits(iValue);

   // printf(" even numbers in digits are:%d",iRet);

    return 0;
}