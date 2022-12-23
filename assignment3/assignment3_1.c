#include<stdio.h>
void printEvn(int iNo)
{
 int iCnt=0,i=0;
   
  
   
    for(iCnt=2;iCnt<=iNo*2;iCnt=iCnt+2)
    {
    printf("%d\t",iCnt);
        
    }
    
   
}
int main()
{
int iValue=0;

printf("Enter the number:");
scanf("%d",&iValue);
    
    printf("first %dth even numbers are:\n",iValue);
   printEvn(iValue);    


    return 0;
}