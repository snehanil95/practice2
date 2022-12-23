//countfrequency small letters in given string from user 

#include<stdio.h>

int CountCh(char *str,char ch)
{
     int iCnt=0;

     while(*str !='\0')
     {
        if(*str ==ch)
        {
        iCnt++;
        }
        str++;
     }

     return iCnt;

}
int main()
{
    int iRet=0;
char str[20];
char ch='\0';

printf("enter the character for search:");
scanf(" %c",&ch);

printf("enter the string:");
//scanf("%s",name);
scanf("%[^'\n']s",str);




 iRet=CountCh(str,ch);

printf("\nfrequency of %c letters in string:%d\n",ch,iRet);
    return 0;
}