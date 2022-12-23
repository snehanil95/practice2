
//perfect number addition of factors is equal to that number

#include<stdio.h>
#include<stdbool.h>

//check perfect number or not prefer this always
int sumFactor(int n)
{
    int iCnt=0;
    int iSum=0;
    printf("Factor:\n");
    for(iCnt=1;iCnt<=n/2;iCnt++)
    {
     if(n%iCnt==0)
      {
        //printf("%d\n",iCnt);
        iSum=iSum+iCnt;
      }

    }
    return iSum;
  
  
}
bool checkPerfect(int iNo)
 {
   int fSum=0;
   
   
    fSum=sumFactor(iNo);

   if (fSum == iNo)
     return true;
    else
       return false;
   
 }
int main()
{
    bool bRet;
    int iNo=0;
    printf("enter the num:");
    scanf("%d",&iNo);
    //Factor(iNo);
    //printf("Factrorial %d of %d is",iNo,iAns);
   //printf("Addition of factors:%d",Factor(iNo));
    bRet=checkPerfect(iNo);
    if(bRet == true)
     printf("%d is is perfect",iNo);
     else
      printf("%d is not perfect",iNo);
    return 0;
}