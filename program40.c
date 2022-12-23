#include<stdio.h>
#include<stdbool.h>
//palindrom num
bool palindrom(int iNo)
{
    int iDigit=0;
   // int iRev=0;
    int iCnt=0;     //for(;;) allowed   

                    //for(;iNo!=0;) allowed
    int iTemp=iNo;
    for(iCnt=iNo,iRev=0;iCnt !=0;iCnt=iCnt/10)   //chenges we can write for loop with multiple initilisation/condition/displacement by searating ,
    {   //its not neccesary displacement is alway ++ or -- 
        iDigit=iCnt%10;
        iRev=(iRev*10)+iDigit;
        
        

    }
    
    
     return (iRev==iTemp);
}
int main()
{
  int iValue;
  bool bRet;
  printf("Enter the num:");
  scanf("%d",&iValue);

  bRet=palindrom(iValue);

  if(bRet==true)
   printf("Number is palindrom");

   else
   printf("Number is not palindron");


    return 0;
}