/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print $ * till that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the $ * till that number
// Input:4
//Output:1 2 3 4
//Input:8
//output:1 2 3 4 5 6 7 8 
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayNum(int iNo)
{

    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
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