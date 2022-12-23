#include<stdio.h>
#include<ctype.h>
char ConvertCase(char c)
{
  char ch;
    if(isupper(c))
    {
        ch=tolower(c);
        return ch;
    }
    else if(islower(c))
     {
        ch=toupper(c);
        return ch;
     }
}
int main()
{
    char ch='\0';
    char cRet='\0';
    printf("Enter the character:");
    scanf("%c",&ch);
    printf("after conver case:");
    cRet=ConvertCase(ch);
    printf("%c",cRet);

    return 0;
}