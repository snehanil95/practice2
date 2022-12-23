/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print all oddnumbers till that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the odd numbers till that number
// Input:4
//Output:1 3 
//Input:8
//output:1  3  5 7  
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayOddNum(int iNo)
{

    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
 int iNo=0;

  printf("Enter the number:");
  scanf("%d",&iNo);

  DisplayOddNum(iNo);
    return 0;
}