#include<stdio.h>
#include<stdbool.h>
bool chkChar(char *str,char c)
{
     bool flag=false;
    while(*str !='\0')
    {
        if(*str==c)
        {
            flag= true;
            break;
        }
        str++;
    }
    
    return flag;
}
int main()
{
    char arr[20];
    char ch='\0';
    bool bRet=false;
    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    printf("Enter the character to search:");
    scanf(" %c",&ch);
    bRet=chkChar(arr,ch);
    if(bRet==true)
    {
        printf("%c charecter is in string ",ch);
    }  

    else{
        printf("%c charecter is not in string ",ch);
    }  
    return 0;
}
