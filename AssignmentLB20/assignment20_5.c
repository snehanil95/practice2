#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i=0,j=0;
 int iCnt=0;
 char ch='A';
 char ch1='a';
    for(i=1;i<=iCol;i++)
    {
        ch='A';
        ch1='a';
        for(j=1;j<=iRow;j++)
        { 
            if(i%2 !=0)
            {
         printf("%c\t",ch); 
         ch++;
            }
            else
            printf("%c\t",ch1); 
         ch1++;
            
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