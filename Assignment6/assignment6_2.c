/*Algorithm:
    1.START
    2.Accept the Number from user
    3.check number grater than 100
    3.print result
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Write a program which accept number from user and print
//                  that number is greater then 100 or not
// Input:104
//Output:Greater
//input:34
//output:Smaller
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0

 BOOL chkGreater(int iValue)
 {

    if(iValue>100)
    {
        return TRUE;
    }
    else 
    return FALSE;
 }
 int main()
 {
  int iNo=0;
    BOOL bRet=FALSE;
  printf("Ente the number :");
  scanf("%d",&iNo);

        bRet=chkGreater(iNo);

        if(bRet==1)
           printf("Greater");

        else
        printf("smaller");

    return 0;
 }