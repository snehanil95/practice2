#include<stdio.h>
#include<stdbool.h>
bool chkCapital(char ch)
{
    bool flag=false;

    if((ch>='A') &&(ch<='Z'))
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

  bRet=chkCapital(cValue);

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