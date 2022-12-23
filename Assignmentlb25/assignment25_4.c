 #include<stdio.h>
 #include<stdbool.h>
bool chkVowel(char *str)
{
 int iCnt=0;
 bool flag=false;
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='o')||(*str=='i')||(*str=='e')||(*str=='u'))
        {
            flag=true;
        }

        
        
        else
        {
            flag= false;
        }

        str++;
    }
    return flag;
}
int main()
{
    char Arr[20];
    bool bRet=0;

    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    bRet=chkVowel(Arr);
   if(bRet==true)
   {
    printf("TRUE");
   }
   else{
    printf("FALSE");
   }

    return 0;
}