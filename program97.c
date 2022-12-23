//check wether letters is in given string from user 

#include<stdio.h>
#include<stdbool.h>

bool chkCh(char *str,char ch)
{
    bool bFlag=false;
     while(*str !='\0')
     {
        if(*str ==ch)
        {
            bFlag=true;
            break;
        }
        str++;
     }

     return bFlag;
}
int main()
{
bool bRet=false;
char str[20];
char ch='\0';




printf("enter the string:");
//scanf("%s",name);
scanf("%[^'\n']s",str);


printf("enter the character for search:");
scanf(" %c",&ch);

 bRet=chkCh(str,ch);
 if(bRet==true)
 {
    printf("\ncharacter is present");

 }
else
printf("\ncharacter is not present");
    return 0;
}