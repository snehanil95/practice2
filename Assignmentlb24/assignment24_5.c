#include<stdio.h>
void Display(char ch)
{
    printf("\n%d\t%o\t%x\t",ch,ch,ch);

    
}
int main()
{
 char cVal='\0';
 printf("Enter the small character:");
 scanf("%c",&cVal);
 printf("Output:");
 printf("\nDecimal\tOctal\tHexadecimal");
  Display(cVal);
    return 0;
}