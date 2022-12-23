/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print table of that number in reverse order
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the table that number in reverse order
// Input:4
//Output: 40 36 32 28 24 20 16 12 8 4
//Input:8
//output: 80 64 56 48 40 32 24 16 8
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void ReverseTable(int iNo)
{

    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt*iNo);
    }
}
int main()
{
 int iNo=0;

  printf("Enter the number:");
  scanf("%d",&iNo);

  ReverseTable(iNo);
    return 0;
}