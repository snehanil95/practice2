/*Algorithm:
    1.START
    2.Accept the two numbers from user
    3.check wheater numbers are equal or not
    4.print result
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Writw a program which accept two numbers from user and 
//print that number equal or not
// Input:10 10
//Output:equal
//Input:10,23
//output:not equal
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 ////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0
 BOOL chkEqual(int iNo1,int iNo2)
 {

    if(iNo1==iNo2)
    return TRUE;

    else
    return FALSE;
 }
 int main()
 {
    int iNo1,iNo2;
    BOOL bRet=FALSE;
    printf("Enter two numbers:");
    scanf("%d%d",&iNo1,&iNo2);

    bRet=chkEqual(iNo1,iNo2);

    if(bRet==TRUE)
    {
        printf("Number is equal");

    }
    else{
        printf("not equal");
    }

    return 0;
 }