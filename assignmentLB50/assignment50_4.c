//togggle 7thand 10th bit toggle
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

//0000  0000    0000    0000    0000  0010    0100    0000

//0X0000240



UINT ToggleBit(UINT No)
{
    UINT iMask=0X0000240;

    return(No ^ iMask);
    
}


int main()
{
    UINT value=0;
    UINT iRet=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    iRet=ToggleBit(value);

    printf("Updated number is:%d",iRet);

    return 0;
}
