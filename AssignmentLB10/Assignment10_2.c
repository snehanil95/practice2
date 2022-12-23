/*Algorithm:
    1.START
    2.Accept the width and height user
    3.calculate area of rectangle
    3.print Area of rectangle
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept width and height from user and 
//print Area of rectangle
// Input:5.3 9.78
//Output:51.834
//Input:8  4
//output:-32
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////

#include<stdio.h>
float ReactArea(float No1,float No2)
{
    return No1*No2;
}
int main()
{
    float ht,wt;
    printf("Enter the heght of rectangle:");
    scanf("%f",&ht);

    printf("Enter the width of rectangle:");
    scanf("%f",&wt);

    printf("Area of rectangle=%f",ReactArea(wt,ht));

    return 0;
}