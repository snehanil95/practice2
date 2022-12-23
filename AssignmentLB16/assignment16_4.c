//display numbers in beween range
#include<stdio.h>
#include<stdlib.h>
/*
int Range(int Arr[],int N,int num1,int num2)
{
     int iCnt=0;
     printf("***");
    for(iCnt=0;iCnt<N;iCnt++)
    {  
        
         
         if(Arr[iCnt]>=num1 && Arr[iCnt]<=num2)
            printf("%d",Arr[iCnt]);   
            
        
    }

}
*/

int main()
{
int iSize=0;
int *ptr=NULL;
int i=0;
int bRet=0;
int n1=0,n2=0;

printf("How many elements you want to enter in array:");
scanf("%d",&iSize);
ptr=(int *)malloc(sizeof(int)*iSize);

printf("Enter the elements of array:");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }
printf("Enter the range :");
scanf("%d%d",&n1,&n2);
int iCnt=0;
     
    for(iCnt=0;iCnt<iSize;iCnt++)
    {  
        
         
         if(ptr[iCnt]>=n1 && ptr[iCnt]<=n2)
            printf("%d\n",ptr[iCnt]);   
            
        
    }

  //Range(ptr,iSize,n1,n2);
 
    return 0;
}