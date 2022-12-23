#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL chkVowel(char ch)
{

    if(ch=='a' || ch=='A' || ch=='e' || ch =='i' || ch =='I' || ch=='o'|| ch=='u' || ch =='U' || ch =='O' || ch=='E')
    return 1;
    
    else
    return 0;
}
int main()
{
     char ch='\0';
BOOL bRet;
    printf("Enter the character:");
    scanf("%c",&ch);

    bRet=chkVowel(ch);
    if(bRet == 1)
    printf("charecter is vowel:");
    else
    printf("character is not vowel");
    return 0;
}