#include<stdio.h>
#include<stdbool.h>
bool divisibleByThreeFive(int iValue)
{
    
    if((iValue%3 ==0) && (iValue%5==0))
     {
     return true;
     }
     else
     return false;
    


}
int main()
{
 int iNo;
 bool bRet;

 printf("\nenter the number=");
 scanf("%d",&iNo);

 bRet=divisibleByThreeFive(iNo);

 if(bRet==true)
 {
    printf("\n%d is divisible by 3 and 5",iNo);
 }
 else
    printf("\n%d is not divisible by 3 and 5,",iNo);
return 0;

}