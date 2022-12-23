/*Algorithm:
    1.START
    2.Accept the distance in km ffrom user
    3.convert in into meter
    3.print result
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept distance in km from user and 
//convert it into meter 

// Input:5
//Output:5000
//Input: 4
//output:-4000
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////

#include<stdio.h>
float KMtoMeter(float No)
{
    return No*1000;
}
int main()
{
 float Dis=0;

 printf("Enter the Distance:");
 scanf("%f",&Dis);

 printf("%f distance in km in meter will be %f",Dis,KMtoMeter(Dis));

    return 0;
}