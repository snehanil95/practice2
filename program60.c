 //4
//4 3 2 1


#include<stdio.h>
void Display(int N)
{
    int iCnt=0;
    if(N<0)
    {
        N=-N;
    }

    for(iCnt=N;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt); 
    }
printf("\n");

}
int main()
{
  int iNo;
  printf("Enter the number:\n");
  scanf("%d",&iNo);

  Display(iNo);


    return 0;
}