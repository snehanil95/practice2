//countfrequency small letters in given string from user 

#include<stdio.h>

int CountSmall(char *str)
{
     int iCnt=0;

     while(*str !='\0')
     {
        if((*str >= 'a')&&(*str <='z'))
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

 iRet=CountSmall(str);

printf("frequency of small letters in string:%d\n",iRet);
    return 0;
}