
  
  #include<stdio.h>
int MultFactor(int iNo)
{
  int iMult=1;
    int iCnt=0;
 for (iCnt=1;iCnt<=iNo/2;iCnt++)
    {

        if(iNo%iCnt == 0)
        {
            printf("%d\t",iCnt);
            
            iMult=iMult*iCnt; 
                
        }
    }
return iMult;

}
int main()
{
 int iValue=0;
 int iRet=0;

 printf("Enter the number:");
 scanf("%d",&iValue);

 iRet=MultFactor(iValue);

 printf("Factors Multiplication: %d",iRet);



    return 0;
}