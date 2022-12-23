/*Algorithm:
    1.START
    2.Accept the Name from user
    3.print that Name
    4.END
*/

//////////////////////////////////////////////////////////////////////////
//
//Application name:Writw a program which accept name from user and print that name
// Input:Piyush khairnar
//Output:Piyush khairnar
// Author:Sneha Anil Memane
//Date:4 Nov,2022
 /////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 int main()
 {
    char Name[30];
    printf("Enter the Name:");
    scanf("%s",&Name);

    printf("The name which you entered is:%s",Name);

    return 0;
 }