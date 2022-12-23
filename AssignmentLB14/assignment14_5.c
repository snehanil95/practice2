//// Numbers which are multiple of 11
#include<stdio.h>
#include<stdlib.h>
voif multipleOfEle(int Arr[],int N)
{
     int iCnt=0;
     
    for(iCnt=0;iCnt<N;iCnt++)
    {

        if(Arr[iCnt]%11 ==0 )
         printf("%d",Arr[iCnt]); 
    }

}  


int main()
{
int iSize=0;
int *ptr=NULL;
int i=0;
int iRet=0;

printf("How many elements you want to enter in array:");
scanf("%d",&iSize);

ptr=(int *)malloc(sizeof(int)*iSize);

printf("Enter the elements of array:");

 for(i=0;i<iSize;i++)
 {
    scanf("%d",&ptr[i]);
 }
printf("\nNumbers which are multiple of elevenn are:");
  iRet=multipleOfEle(ptr,iSize);

  
  
    return 0;
}