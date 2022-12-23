 #include<stdio.h>
 
 
int Factor(int iNo)
{
  int iMult=1;
    int iCnt=0;
 for (iCnt=1;iCnt<=iNo/2;iCnt++)
    {

        if(iNo%iCnt == 0)
        {
            printf("%d\t",iCnt);
            
            return (iCnt);
               
        }
       // return iCnt;
    }
//return iMult;

}
int MultFactor(int iNo)
 {
   int FRet=0;  
    int iMult=1;
    int iCnt=0;
    
    FRet=Factor(iNo);
    iMult=iMult*FRet;
     
    
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
