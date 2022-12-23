#include<stdio.h>

int chkChar(char str[],char c)
{
     int iCnt=0,temp=0;
    while(str[iCnt] !='\0')
    {
        if(str[iCnt]==c)
        {
           temp=iCnt;
        }
        
        iCnt++;
    }
    
    
        return temp;
    
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
    
    printf("last occurance index %c =%d",ch,iRet);
    return 0;
}
