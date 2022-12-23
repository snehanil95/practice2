 #include<stdio.h>
int DSumNonFactor(int iNo)
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
    printf("\n%d",iSum);
for (iCnt1=1;iCnt1<=iNo/2;iCnt1++)
    {

        if(iNo%iCnt1 == 0)
        {
           // printf("\n%d\t",iCnt1);
            
            iSum1=iSum1+iCnt1; 
                
                
        }
    }
    printf("\n%d",iSum1);
return iSum-iSum1;

}
void Display(int iNo)
{
    int iRet=0;
    iRet=DSumNonFactor(iValue);

 printf("\nDifference between Factor and Non Factors Summation: %d",iRet);

}
int main()
{
 int iValue=0;
 //int iRet=0;

 printf("Enter the number:");
 scanf("%d",&iValue);

 
  Display(iValue); 


    return 0;
}