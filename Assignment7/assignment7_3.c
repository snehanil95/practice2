/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print number line till that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the number line till that number
// Input:4
//Output:-4 -3 -2 -1 0 1 2 3 4
//Input:8
//output:-8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayNum(int iNo)
{

    int iCnt=0;
    for(iCnt=-iNo;iCnt<iNo;iCnt++)
    {
        printf("%d\t",iCnt);
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