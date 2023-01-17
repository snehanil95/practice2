
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No,UINT pos)
{
    UINT iMask=0X00000001;  //UINT iMask=1;//he khup important aahe
    UINT result=0;
    if((pos<1) || (pos>32))
    {
        printf("Invalid posiotn it should be in between the 1 to 32");
        return false;
    }

    iMask=iMask<<(pos-1);       //dynamic mask formation

    result= No ^ iMask;

    return result;
}
int main()
{
    UINT value=0;
    UINT pos=0;
    UINT iRet=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    printf("Enter the position of bit:");
    scanf("%d",&pos);

    iRet=ToggleBit(value,pos);

    printf("Number after %d th position off will:%d",pos,iRet);
    return 0;
}