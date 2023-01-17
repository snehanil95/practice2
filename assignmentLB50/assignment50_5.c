//on first 4 bit
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

//0000  0000    0000    0000    0000  0000    0000    1111



UINT OnBit(UINT No)
{
    UINT iMask=0X000000f;

    return(No | iMask);
    
}


int main()
{
    UINT value=0;
    UINT iRet=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    iRet=OnBit(value);

    printf("Updated number is:%d",iRet);

    return 0;
}
