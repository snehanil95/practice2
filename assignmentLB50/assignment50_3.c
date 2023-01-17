//7th bit off(if on)
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

//0000  0000    0000    0000    0000  0000    0100    0000
//1111  1111    1111    1111    1111  1111    1111    1111
//0X0000040



UINT OffBit(UINT No)
{
    UINT iMask=0X0000040;

    return(No ^ iMask);
    
}


int main()
{
    UINT value=0;
    UINT iRet=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    iRet=OffBit(value);

    printf("Updated number is:%d",iRet);

    return 0;
}