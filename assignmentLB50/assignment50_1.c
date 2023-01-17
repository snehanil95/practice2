//7th bit off(if on)
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

//0000  0000    0000    0000    0000  0000    0000    0000
//1111  1111    1111    1111    1111  1111    1011    1111
//0Xffffffbf



UINT OffBit(UINT No)
{
    UINT iMask=0Xffffffbf;

    return(No & iMask);
    
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