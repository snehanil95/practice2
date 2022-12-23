#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i=0,j=0;
 int iCnt=0;
 
    for(i=iCol;i>0;i--)
    {
        
        for(j=iRow;j>0;j--)
        { 
         printf("%d\t",i); 
         
            
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