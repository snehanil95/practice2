/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print even factorial that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the even factorial that number
// Input:5
//Output:8 (4*2)
//Input:8
//output:-3840(2*4*6*8)
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
    int iCnt=0,iFact1=1,iFact2=1;
    for(iCnt=2;iCnt<=iNo;iCnt=iCnt+2)
    {
        
         iFact1=iFact1*iCnt;
    }

    for(iCnt=1;iCnt<=iNo;iCnt=iCnt+2)
    {
        
         iFact2=iFact2*iCnt;
    }
    return iFact1-iFact2;
}
int main()
{
 int iNo=0;
    int Ret=0;
  printf("Enter the number:");
  scanf("%d",&iNo);

  Ret=DisplayFactorial(iNo);
  printf("difference between even and odd Factorial=%d",Ret);
    return 0;
}