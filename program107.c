#include<stdio.h>
void strcpyX(char *src,char *dst)
{
   while(*src!='\0')
   {
    if((*src>='a')&&(*src<='z'))
    {
    *dst-=32;
    }
    else{
    *dst=*src;
    }

    src++;
    dst++;
   
    

    }
   *dst='\0';
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter the string:");
    scanf("%[^'\n']s",arr);

    strcpyX(arr,brr);

   printf("Copied string:%s\n",brr);

    return 0;
}