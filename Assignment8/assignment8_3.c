/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print factorial that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the factorial that number
// Input:4
//Output:-24
//Input:8
//output:-40320
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int DisplayFactorial(int iNo)
{

    int iCnt=0,iFact=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
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