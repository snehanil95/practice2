//7th bit off(if on) and 10th 
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

//0000  0000    0000    0000    0000  0000    0000    0000
//1111  1111    1111    1111    1111  1101    1011    1111
//0Xfffffdbf



UINT OffBit(UINT No)
{
    UINT iMask=0Xfffffdbf;

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
