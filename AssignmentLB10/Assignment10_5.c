/*Algorithm:
    1.START
    2.Accept the area in square feet from user
    3.convert in into meter
    3.print result
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept area in square feet in km from user and 
//convert it into meter 

// Input:5
//Output:0.464515
//Input: 7
//output:0.650321
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////

#include<stdio.h>
float SquarefeettoMeter(float No)
{
    return No*0.0929;
}
int main()
{
 float Area=0;

 printf("Enter the Area in square feet:");
 scanf("%f",&Area);

 printf("%f Area insquare feet in meter will be %f",Area,SquarefeettoMeter(Area));

    return 0;
}