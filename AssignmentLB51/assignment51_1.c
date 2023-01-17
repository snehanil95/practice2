
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT No,UINT pos)
{
    UINT iMask=0X00000001;  //UINT iMask=1;//he khup important aahe
    UINT result=0;
    if((pos<1) || (pos>32))
    {
        printf("Invalid posiotn it should be in between the 1 to 32");
        return false;
    }

    iMask=iMask<<(pos-1);       //dynamic mask formation

    result= No & iMask;

     if(result==iMask)
    {
        return true;
    }

    else
    {
        return false;
    }

}
int main()
{
    UINT value=0;
    UINT pos=0;
    bool bRet=false;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    printf("Enter the position of bit:");
    scanf("%d",&pos);

    ChkBit(value,pos);

    if(bRet==true)
    {
        printf("bit at posotion %d is on \n",pos);
    }
    else
    {
        printf("bit at posotion %d is off \n",pos);
    }
    
    return 0;
}