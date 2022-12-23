 //4
//a b c d
//

#include<stdio.h>
void Display(int N)
{
    int iCnt=0;
    char ch='a';
    if(N<0)
    {
        N=-N;
    }

    for(iCnt=1;iCnt<=N;iCnt++,ch++)
    {
        printf("%c\t ",ch); 
        
        
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