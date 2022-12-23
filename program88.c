//how to enter input for string

#include<stdio.h>
//#include<string.h>
int main()
{
char name[30];
printf("enter the name:");
//scanf("%s",name);
scanf("%[^'\n']s",name);

printf("Name:%s",name);

    return 0;
}