#include<stdio.h>

void strrevX(char *str)
{
  char *start=str;
  char *end=str;
 char temp='\0';
   
  while(*end !='\0')
  {
    end++;
  }
  end--;
while(start<end)
{
     temp=*start;
   *start=*end; 
   *end=temp;

   start++;
   end--;
}

}

int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter the string:");
    scanf("%[^'\n']s",arr);
    printf("Original string is:%s\n",arr);
    strrevX(arr);

   printf("Reversed string:%s\n",a2rr);
    
    
    return 0;
}