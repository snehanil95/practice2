#include<stdio.h>

int RangeDis(int Start,int end)
{

    int sum=0,iCnt=0;
    for (iCnt=Start;iCnt<=end;iCnt++)
    {
        printf("%d\t",iCnt);
        sum=sum+iCnt;
    }
    return sum;
}
int main()
{
    int n1,n2,Ret=0;
    printf("Enter the range:");
     scanf("%d%d",&n1,&n2);
    printf("Numbers between %d and %d are:",n1,n2);
    if(n1<n2)
    Ret=RangeDis(n1,n2);
    else
    printf("Invalid input");

    printf("\nAddition in between %d and %d is:%d",n1,n1,Ret);

}
