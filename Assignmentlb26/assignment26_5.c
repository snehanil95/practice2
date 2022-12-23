#include<stdio.h>
int strspace(char *str)
{ 
     int iCnt=0;
    while(*str !='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    iRet=strspace(arr);

    printf("space in string is %d",iRet);

    return 0;
}
