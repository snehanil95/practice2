#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i=0,j=0;
    for(i=1;i<=iCol;i++)
    {
       // printf("*\t");
        for(j=1;j<=iRow;j++)
        {
            if(i==1 || i==iCol || j==1 || j==iRow)
            {
                printf("*\t");
            }
            else
            printf("@\t");
            
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
