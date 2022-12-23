#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i=0,j=0;
    for(i=1;i<=iCol;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i>=j)
            printf("*\t");
            else
            printf("#\t");
        }
        printf("\n");
    }
}
int main()
{

    int iN1,iN2;

    
    printf("Ente the number of Rows:");
    scanf("%d",&iN1);

    printf("Ente the number of Columns:");
    scanf("%d",&iN2);

    Display(iN1,iN2);
}