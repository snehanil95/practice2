//countfrequency 'a' in given string from user 

#include<stdio.h>

int CountCh(char *str)
{
     int iCnt=0;

     while(*str !='\0')
     {
        if((*str=='a')||(*str=='A'))
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
char str[10];
printf("enter the string:");
//scanf("%s",name);
scanf("%[^'\n']s",str);

 iRet=CountCh(str);

printf("frequency of a in string:%d\n",iRet);
    return 0;
}