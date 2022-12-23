#include<stdio.h>

void chkChar(char str[])
{
     int iCnt=0,i=0;
    while(str[iCnt] !='\0')
    {
       
        iCnt++;
    }
    
    for(i=iCnt;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
       
}
int main()
{
    char arr[20];
    char ch='\0';
    int iRet=0;
    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    printf("Reverse string is:");
    chkChar(arr);
    
    
}
