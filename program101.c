#include<stdio.h>
void strLwr(char *str)
{

    while(*str != '\0')
    {
    if((*str>='A')&&(*str<='Z'))
    {
    *str+=32;
    }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    strLwr(arr);

    printf("toggled string=%s\n",arr);

    return 0;
}