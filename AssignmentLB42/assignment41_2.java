import java.util.*;


class MyArray
{
    public void MinArray(int arr1[],int arr2[])
    {
        int min1=arr1[0];
        int min2=arr2[0];
       
        for(int i=0;i<arr1.length;i++)
        {
            if(arr1[i]<min1)
            {
                min1=arr1[i];
            }

        }

        System.out.println("Minimum number from first Array="+min1);
        for(int i=0;i<arr2.length;i++)
        {
            if(arr2[i]<min2)
            {
                min2=arr2[i];
            }

        }
        System.out.println("Minimum number from Second Array="+min2);
    }
}

class assignment41_2
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

        mobj.MinArray(arr,arr1);

        
    }
}