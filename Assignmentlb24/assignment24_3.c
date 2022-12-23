#include<stdio.h>
void DisplayAlph(char ch)
{
 if((ch>='A')&&(ch<='Z'))
 {
    char i='\0';
    for(i=ch;i<='Z';i++)
    {
        printf("%c\t",i);
    }
 }

 if((ch>='a')&&(ch<='z'))
 {
    char j='\0';
    for(j=ch;j>='a';j--)
    {
        printf("%c\t",j);
    }
 }
}

int main()
{
 char cVal='\0';
 printf("Enter the  character:");
 scanf("%c",&cVal);
 printf("Output:");
  DisplayAlph(cVal);
    return 0;
}