#include<stdio.h>
int AddNum()
{
    int i=0;

    int sum=0;
    for(i=1;i<=5;i++)
    {
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int iAns=0;
   iAns=AddNum();
   printf("Additon of 1 to 5 numbers=%d\n",iAns);
    return 0;
}