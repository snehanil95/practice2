#include<stdio.h>
void NonFactor(int iNo)
{
  
    int iCnt=0;
 for (iCnt=1;iCnt<=iNo;iCnt++)
    {

        if(iNo%iCnt != 0)
        {
            printf("%d\t",iCnt);
            
            
                
        }
    }


}
void DisNonFactor(int iNo)
{
    NonFactor(iNo);
}
int main()
{
 int iValue=0;
 

 printf("Enter the number:");
 scanf("%d",&iValue);

 DisNonFactor(iValue);

 
 


    return 0;
}