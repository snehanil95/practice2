/*Algorithm:
    1.START
    2.Accept the temperature in celcius user
    3.convert it into fahrenheit
    3.print result
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept the temperature in celcius from user and 
//convert it int fahrenheit
// Input:10
//Output:50.00
//Input:12
//output:-53.6999
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////

#include<stdio.h>
float toConvert(float No)
{
    float ret=0;
   // printf("%f",No);
    ret=((No*9)/5+32);
    
    return ret;
}
int main()
{
 float temp;

 printf("Enter the temperature in celcius:");
 scanf("%f",&temp);

 printf("%f celcius temprature in fahrenheit is %f",temp,toConvert(temp));

    return 0;
}