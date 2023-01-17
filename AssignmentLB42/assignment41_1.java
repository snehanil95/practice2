import java.util.*;


class MyArray
{
    public int DiffArray(int arr1[],int arr2[])
    {
        int Sum1=0;
        int Sum2=0;
        for(int i=0;i<arr1.length;i++)
        {
            Sum1=Sum1+arr1[i];
        }
        for(int i=0;i<arr2.length;i++)
        {
            Sum2=Sum2+arr2[i];
        }
        return Sum1-Sum2;
    }
}

class assignment41_1
{
public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the length of first array:");
        int ilen=sobj.nextInt();

        System.out.println("Enter the element of Array:");
            int arr[]=new int[ilen];
        for(int i=0;i<ilen;i++)
        {
            arr[i]=sobj.nextInt();
        }

        System.out.println("Enter the length of second array:");
        ilen=sobj.nextInt();

        System.out.println("Enter the element of Array:");
            int arr1[]=new int[ilen];
        for(int i=0;i<ilen;i++)
        {
            arr1[i]=sobj.nextInt();
        }

        MyArray mobj=new MyArray();

        int iRet=mobj.DiffArray(arr,arr1);

        System.out.println("Difference betweent Summation of two array:"+iRet);
        
    }
}