#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i=0,j=0;
 int iCnt=0;
 int iCnt1=0;
    for(i=0;i<iCol;i++)
    {
        iCnt1=1;
        iCnt=0;
        for(j=1;j<=iRow;j++)
        { 
          printf("%d\t",i+j);  
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