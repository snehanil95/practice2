/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print table of that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the table that number
// Input:4
//Output:4 8 12 16 20 24 28 32 36 40

//Input:8
//output:8 16 24 32 40 48 56 64 80
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayTable(int iNo)
{

    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}
int main()
{
 int iNo=0;

  printf("Enter the number:");
  scanf("%d",&iNo);

  DisplayTable(iNo);
    return 0;
}