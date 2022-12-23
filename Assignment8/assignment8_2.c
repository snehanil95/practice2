/*Algorithm:
    1.START
    2.Accept the number from user
    
    3.print number specilling of that number
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept nuber from user and 
//print the number spelling of that number
// Input:4
//Output:-four
//Input:8
//output:-eight
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayNum(int iNo)
{

   switch(iNo)
   {
    case 1:printf("\none");break;
    case 2:printf("\nTwo");break;
    case 3:printf("\nThree");break;
    case 4:printf("\nfour");break;
    case 5:printf("\nFive");break;
    case 6:printf("\nSix");break;
    case 7:printf("\nSeven");break;
    case 8:printf("\neight");break;
    case 9:printf("\nnine");break;
    case 0:printf("\nzero");break;

    default:printf("Invalid Number");

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