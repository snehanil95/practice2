#include<stdio.h>
void strUpper(char *str)
{

    while(*str != '\0')
    {
    if((*str>='a')&&(*str<='z'))
    {
    *str-=32;
    }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    strUpper(arr);

    printf("toggled string=%s\n",arr);

    return 0;
}