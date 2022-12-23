#include<stdio.h>
void strDigit(char *str)
{
    while(*str !='\0')
    {
        if((*str>='0')&&(*str <='9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the string:");
    scanf("%[^'\n']s",arr);
    printf("only digits from given string:");
    strDigit(arr);

    //printf("Modified string is %s",arr);

    return 0;
}
