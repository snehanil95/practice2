/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.check numbers is less than 50,greater then 50 and less than 100,greater than 100
    4.print result large,medium,small respectively
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the numbers result large medium small
// Input:40
//Output:small
//Input:80
//output:medium
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayNum(int iNo)
{

    if(iNo<50)
    {
        printf("\nNumber is small");
        
    }
    if(iNo>100)
    {
        printf("\nNumber is Large");
        
    }
    if(iNo>50 && iNo<100)
    {
    printf("medium");
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