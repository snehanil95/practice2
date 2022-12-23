#include<stdio.h>
#include<stdbool.h>
bool chkSmall(char ch)
{
    bool flag=false;

    if((ch>='a') &&(ch<='z'))
    {
        flag=true;
    }
    else{
        flag=false;
    }
    return flag;
}
int main()
{
 char cValue='\0';
  bool bRet=false;

  printf("Enter the character:");
  scanf("%c",&cValue);

  bRet=chkSmall(cValue);

  if(bRet==true)
  {
    printf("TRUE:");
  }
  else
  {

    printf("FALSE");
  }

    return 0;
}