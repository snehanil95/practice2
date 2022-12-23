#include<stdio.h>
void strlwr(char *str)
{
    while(*str !='\0')
    {
        if((*str>='A')&&(*str <='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    strlwr(arr);

    printf("Modified string is %s",arr);

    return 0;
}
