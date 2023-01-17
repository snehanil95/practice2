
#include<stdio.h>
#include<stdbool.h>
typedef unsigned long int UINT;

UINT ToggleNible(UINT No)
{
    UINT iMask=0X0000000f;  //UINT iMask=1;//he khup important aahe
    UINT result=0;
    UINT iMask1=0Xf000000;

      
    result= No ^ iMask;

    return (result | iMask1);
}
int main()
{
    UINT value=0;
   
    UINT iRet=0;

    printf("Enter value in Decimal format:");
    scanf("%ld",&value);

   
    iRet=ToggleNible(value);

    printf("Number after toggle firstand last nibble number will:%ld",iRet);
    return 0;
}