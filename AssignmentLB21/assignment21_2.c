#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i=0,j=0;
 int iCnt=0;
 int iCnt1=0;
    for(i=0;i<=iCol;i++)
    {
        iCnt1=1;
        iCnt=0;
        for(j=0;j<=iRow;j++)
        { 
           if(i%2 ==0)
           {
            iCnt=iCnt+2;
            printf("%d\t",iCnt);
            
            
           }
            else
            {
            //iCnt=1;
            printf("%d\t",iCnt1);
            iCnt1=iCnt1+2;
            }
           

            
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