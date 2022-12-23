#include<stdio.h>
void Display(int iRow,int iCol)
{
 int i=0,j=0;
 char ch='a';
 int iCnt1=0;
    for(i=0;i<=iCol;i++)
    {
        iCnt1=1;
        ch='a';
        for(j=0;j<=iRow;j++)
        { 
           if(i%2 !=0)
           {
            printf("%c\t",ch);
            ch++;
            
            
           }
            else
            {
            //iCnt=1;
            printf("%d\t",iCnt1);
            iCnt1=iCnt1+1;
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