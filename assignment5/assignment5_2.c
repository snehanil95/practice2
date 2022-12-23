#include<stdio.h>
int DescFactor(int iNo)
{
  int arr[iNo/2];
    int iCnt=0,i=0;
    int j=0;
 for (iCnt=iNo/2;iCnt>0;iCnt--)
    {

    if(iNo%iCnt == 0)
        {
            printf("%d\t",iCnt);
             
        }
      
      
        
 
}
    
    
}
void Display(int iNo)
{
    DescFactor(iNo);
}
    
int main()
{
 int iValue=0;
 int iRet=0;

 printf("Enter the number:");
 scanf("%d",&iValue);

 Display(iValue);

 



    return 0;
}