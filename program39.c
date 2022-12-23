#include<stdio.h>
#include<stdbool.h>
//palindrom num by using two functions
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=iNo;
    while(iNo !=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;


    }
    
   return iRev; 
     
     
}

bool chkPali(int iData)
{

    int iRev=0;
    iRev=Reverse(iData);
    return (iRev==iData);

}
int main()
{
  int iValue;
  bool bRet;
  printf("Enter the num:");
  scanf("%d",&iValue);

  bRet=chkPali(iValue);

  if(bRet==true)
   printf("Number is palindrom");

   else
   printf("Number is not palindron");


    return 0;
}