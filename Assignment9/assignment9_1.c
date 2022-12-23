/*Algorithm:
    1.START
    2.Accept the total number from user
    
    4.print number of * #
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept marks from user and 
//print percentage
// Input:2
//Output:*  * # #
//Input:4
//output:*  * * * # # # #
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{

  if(iNo<0)
  {
    iNo=-iNo;
  }
    int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*\t");
      //  printf("#");
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        //printf("*\t");
        printf("#\t");
    }
}
int main()
{
 int iNo=0;

  printf("Enter the number:");
  scanf("%d",&iNo);

  Display(iNo);
    return 0;
}