#include<stdio.h>
void DisplayASCII()
{ 
    int i=0;

    for(i=0;i<=127;i++)
    {
        printf("%d\t%o\t%c\n",i,i,i);

    }
}
int main()
{
    printf("Dec\tHex\tChar\n");
 DisplayASCII();
    return 0;
}