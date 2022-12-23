/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print odd factorial that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the odd factorial that number
// Input:5
//Output:15(5*3*1)
//Input:10
//output:945(9*7*5*3*1)
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int DisplayFactorial(int iNo)
{

   if(iNo<0)
   {
    iNo=-iNo;
   }
    int iCnt=0,iFact=1;
    for(iCnt=1;iCnt<=iNo;iCnt=iCnt+2)
    {
        
         iFact=iFact*iCnt;
    }
    return iFact;
}
int main()
{
 int iNo=0;
    int Ret=0;
  printf("Enter the number:");
  scanf("%d",&iNo);

  Ret=DisplayFactorial(iNo);
  printf("Factorial=%d",Ret);
    return 0;
}