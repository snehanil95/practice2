#include<stdio.h>
void Display(int Num)
{
 int i=0;
    for(i=1;i<=Num;i++)
    {
        printf("#\t%d\t*\t",i);
       
    }
}
int main()
{

    int iN1;    
    printf("Ente the number of elements:");
    scanf("%d",&iN1);

    

    Display(iN1);
}