/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print 5 multiple of that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the 5 multiple fo that number
// Input:4
//Output:4 8 12 16 20
//Input:8
//output:8 16 24 32 40
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayNum(int iNo)
{

    int iCnt=0;
    for(iCnt=1;iCnt<6;iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}
int main()
{
 int iNo=0;

  printf("Enter the number:");
  scanf("%d",&iNo);

  DisplayNum(iNo);
    return 0;
}