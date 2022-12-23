#include<stdio.h>
void CountSmall(char *str)
{
 int iCnt=0;
 int i=0;
    while(*str!='\0')
    {
       iCnt++;
    str++;
    }
    for(i=iCnt;i>=0;i--)
    {
        printf("%c",str[iCnt]);
    }
    
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    CountSmall(Arr);
    //printf("number of small character is:%d",iRet);

    return 0;
}