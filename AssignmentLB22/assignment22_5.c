#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i=0,j=1;
    for(i=1;i<=iCol;i++)
    {
        j=1;
        printf("%d\t",j);
        for(j=2;j<=iRow-1;j++)
        {
            if(i==1 || i==iCol)
            {
                printf("%d\t",j);
            }
            else
            printf("@\t");
            
        }
        printf("%d\n",j);
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