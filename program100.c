#include<stdio.h>
char Tolower(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
    return ch+32;
    }
    else
    {
        return ch;
    }
}
int main()
{
 char cValue='\0';
 char cRet='\0';
 printf("Enter the character\n");
 scanf("%c",&cValue);

 cRet=Tolower(cValue);

 printf("Character in the lower case:%c\n",cRet);

    return 0;
}