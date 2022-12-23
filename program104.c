#include<stdio.h>
void strTog(char *str)
{

    while(*str != '\0')
    {
    if((*str>='a')&&(*str<='z'))
    {
    *str-=32;
    }

   else if((*str>='A')&&(*str<='Z'))
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

    strTog(arr);

    printf("toggled string=%s\n",arr);

    return 0;
}