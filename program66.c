//row 4
//columns 4
/*


* * * *
* * * *
* * * *
* * * *

*/
#include<stdio.h>


void Display(int iRow,int iCol)
{


    int i=0,j=0;
    if(iRow<0)
    {
        iRow=-iRow;
        }

        if(iCol<0)
    {
        iCol=-iCol;
        }



    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
  int iNo1,iNo2;
  printf("Enter the number of rows:\n");
  scanf("%d",&iNo1);
  printf("Enter the number of columns:\n");
  scanf("%d",&iNo2);

  Display(iNo1,iNo2);


    return 0;
}