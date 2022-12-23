/*Algorithm:
    1.START
    2.Accept the three numbers from user
    3.multiply that numbers
    4.print result
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept three numbers from user and 
//print multiplication of that number 
// Input:5  4   7
//Output:140
//Input:5   0   7
//output:
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int Multiplication(int Arr[])
{
    int iMult=1;
    int iCnt=0;
    for (iCnt=0;iCnt<3;iCnt++)
    {
        if(Arr[iCnt]!=0)
        {
        iMult=iMult*Arr[iCnt];
        }
    }
 return iMult;
}
int main()
{
    int iNo[3];
    int iCnt=0;
    int RValue=0;
    printf("Enter the three number:");
    for (iCnt=0;iCnt<3;iCnt++)
    {
        scanf("%d",&iNo[iCnt]);
    }
    RValue=Multiplication(iNo);

    printf("Multiplication=%d",RValue);

    return 0;
}