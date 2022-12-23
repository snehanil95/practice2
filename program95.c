//countfrequency small letters in given string from user 

#include<stdio.h>

int CountCapital(char *str)
{
     int iCnt=0;

     while(*str !='\0')
     {
        if((*str >= 'A')&&(*str <='Z'))
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

 iRet=CountCapital(str);

printf("frequency of capital letters in string:%d\n",iRet);
    return 0;
}