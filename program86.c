#include<stdio.h>
#include<stdbool.h>
bool checkCapital(char ch)
{
    if((ch >='A')&&(ch<='Z'))
    {
    return true;
    }
    else
    {
    return false;
    }
}
int main()
{
char ch='\0';
bool bRet=false;
printf("Enter the character:");
scanf("%c",&ch);

bRet=checkCapital(ch);

if(bRet==true)
{
printf("%c is capital case letter\n",ch);
}
else
{
printf("%c is not capital case letter\n",ch);
}


    return 0;
}