#include<stdio.h>

void RangeDis(int Start,int end)
{

    int iCnt=0;
    for (iCnt=Start;iCnt<=end;iCnt++)
    {
        if(iCnt%2 ==0)
        printf("%d\t",iCnt);
        
    }
}
    
int main()
{
    int n1,n2;
    printf("Enter the range:");
     scanf("%d%d",&n1,&n2);
    printf("Numbers between %d and %d are:",n1,n2);

    RangeDis(n1,n2);

    
}
