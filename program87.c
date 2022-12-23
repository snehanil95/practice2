#include<stdio.h>
#include<stdbool.h>
bool checkDigit(char ch)
{
    if((ch >='0')&&(ch<='9'))
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
printf("Enter the Digit:");
scanf("%c",&ch);

bRet=checkDigit(ch);

if(bRet==true)
{
printf("%c is digit\n",ch);
}
else
{
printf("%c is not digit\n",ch);
}


    return 0;
}