#include<stdio.h>
void DisplayCapital(char ch)
{
    if((ch>='a')&&(ch<='z'))
    {
        printf("%c",ch-32);
    }
    else{
        printf("%c",ch);
    }
}
int main()
{
 char cVal='\0';
 printf("Enter the small character:");
 scanf("%c",&cVal);
 printf("Output:");
  DisplayCapital(cVal);
    return 0;
}