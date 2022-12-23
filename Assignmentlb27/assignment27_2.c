#include<stdio.h>

int chkChar(char *str,char c)
{
     int iCnt=0;
    while(*str !='\0')
    {
        if(*str==c)
        {
            iCnt=iCnt+1;
        }
        str++;
    }
    
    return iCnt;
}
int main()
{
    char arr[20];
    char ch='\0';
    int iRet=0;
    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    printf("Enter the character to search:");
    scanf(" %c",&ch);
    iRet=chkChar(arr,ch);
    
    printf("frequency %c =%d",ch,iRet);
    return 0;
}
