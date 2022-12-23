#include<stdio.h>
#include<stdbool.h>
bool checkSmall(char ch)
{
    if((ch >='a')&&(ch<='z'))
    return true;
    else
    return false;
}
int main()
{
char ch='\0';
bool bRet=false;
printf("Enter the character:");
scanf("%c",&ch);

bRet=checkSmall(ch);

if(bRet==true)
printf("%c is small case letter\n",ch);
else
printf("%c is not small case letter\n",ch);


    return 0;
}