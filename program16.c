#include<stdio.h>

void Display(int n)
{
    int iCnt=1;
 while(iCnt<=n)
 {
    printf("%d.Jay Ganesh...\n",iCnt);
    iCnt++;
 }
}
int main()
{
    int No=0;
    printf("Enter the number how many times you want to display:");
    scanf("%d",&No);
    Display(No);
   
    return 0;
}