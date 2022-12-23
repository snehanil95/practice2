#include<stdio.h>
int SumNonFactor(int iNo)
{
  int iSum=0,iSum1=0;
    int iCnt=0;
    int iCnt1=0;
 for (iCnt=1;iCnt<=iNo;iCnt++)
    {

        if(iNo%iCnt != 0)
        {
            //printf("%d\t",iCnt);
            
            iSum=iSum+iCnt; 
            
            
                
        }

    
    }
    return iSum;

}
void Display(int iNo)
{
iRet=SumNonFactor(iValue);

 printf("\n Non Factors Summation: %d",iRet);
}

int main()
{
 int iValue=0;
 int iRet=0;

 printf("Enter the number:");
 scanf("%d",&iValue);

 Display(iValue);
 

    return 0;
}