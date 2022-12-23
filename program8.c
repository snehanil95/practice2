//1 uderstand the problem stat
//wrt algo
//decide lang
//write prog
//test prog

///////////////////////////////////////////////////////////////////////////////////////////
//Accept a number from user and check wheather it is divisible by 5 or 
/////////////////////////////////////////////////////////////////////////////////////////////
/*
  Start
    accept the number from user
    divisible that no by and check the value of remainder
    if the value is 0
       then display as no is divisible by 5
    else
        display number is not divisible by 5
    
  End
*/
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>


int divisibleByFive(int iValue)
{
    int iAns=0;
    iAns=iValue%5;

    if(iAns==0)
    {
   return true;
    }
    else
       return false;
}

int main()
{
 int iNo=0;
  bool bRet=0;
  printf("Enter the number=");
  scanf("%d",&iNo);

 iRet=divisibleByFive(iNo);

   if(bRet==true)
   {
    printf("\n%d is divisible by 5\n",iNo);
   }
    else
    printf("\n%d is not divisible by 5\n",iNo);
    return 0;
}