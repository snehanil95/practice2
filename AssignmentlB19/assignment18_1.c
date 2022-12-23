#include<stdio.h>
void Display(int Num)
{
 int i=0;
 char ch='A';
    for(i=1;i<=Num;i++)
    {
            printf("%c\t",ch);
            ch++;
    }
}
int main()
{

    int iN1,iN2;

    printf("Ente the number of elements:");
    scanf("%d",&iN1);

    Display(iN1);
    return 0;
    }