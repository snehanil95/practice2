/*Algorithm:
    1.START
    2.Accept the amount in uS Doller from user
    3.conver it into indian rupees
    3.print value
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept amount in US doller from user and 
//print the conversion into indian rupees
// Input:10
//Output:700
//Input:3
//output:270
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int ConvertInR(int iNo)
{

    return iNo*70;
}
int main()
{
 int iNo=0;
 int Rs=0;
  printf("Enter the amunt in US doller:");
  scanf("%d",&iNo);

  Rs=ConvertInR(iNo);
  printf("%d doller in rupees will be %d",iNo,Rs);
    return 0;
}