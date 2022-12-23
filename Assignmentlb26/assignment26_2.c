#include<stdio.h>
void strupr(char *str)
{
    while(*str !='\0')
    {
        if((*str>='a')&&(*str <='z'))
        {
            *str=*str-32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    strupr(arr);

    printf("Modified string is %s",arr);

    return 0;
}
