#include<stdio.h>
#include<string.h>
int strlenX(char str[])
{
     int iCnt=0,i=0;

     while(str[i] !='\0')
     {
        iCnt++;
        i++;
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
 iRet=strlenX(str);

printf("Length of string:%d\n",iRet);
    return 0;
}