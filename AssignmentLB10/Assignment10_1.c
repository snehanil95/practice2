/*
Algorithm:
    1.START
    2.Accept the Radius from user
    3.calculate Area of circl
    
    4.print area of circle
    5.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept radius from user and 
//calculte area of circle
// Input:5.3
//Output:88.20
//Input:10.4
//output:-339.6224
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////


 #include<stdio.h>
 float AreaofCircle(float No)
 {
    float PI=3.14;
  return PI*No*No;

 }

 int main()
 {
    float Radius=0;
    float Ret=0;
    printf("Enter the Radius:");
    scanf("%f",&Radius);

    Ret=AreaofCircle(Radius);

    printf("Area of circle:%f",Ret);

    return 0;
 }