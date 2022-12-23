/*Algorithm:
    1.START
    2.Accept the total marks from user
    3.calculate percentag
    4.print result
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept marks from user and 
//print percentage
// Input:5  4   7
//Output:140
//Input:5   0   7
//output:
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////
#include<stdio.h>

float Percentage1(int iTotal1,int iMarks1)
{
    float per=0.0;
    
     per=(float)iMarks1/iTotal1*100;
    printf("%f",per);
    return per;
}


int main()
{
    int iTotal=0;
    int iMarks=0;
    float rPer=0.0;

    printf("Enter the total marks:");
    scanf("%d",&iTotal);

    printf("Enter the obtained marks:");
    scanf("%d",&iMarks);

    rPer=Percentage1(iTotal,iMarks);

   
   
    printf("\nPercentage=%f",rPer);

    return 0;
}