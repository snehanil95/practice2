#include<stdio.h>
#include<stdbool.h>
bool chkSplChar(char ch)
{
    bool flag=false;
   if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
   
     {
        flag=false;
     }
     else if(ch >= '0' && ch <= '9')
     {
        flag=false;
     }
     else
     {
        flag=true;
     }

     return flag;
}
int main()
{
 char cVal='\0';
 bool bRet=false;
 printf("Enter the  character:");
 scanf("%c",&cVal);


  bRet=chkSplChar(cVal);
  if(bRet==true)
  {
    printf("TRUE");
  }
  else{
    printf("FALSE");
  }

   
    return 0;
}