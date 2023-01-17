import java.util.*;


class MyArray
{
    public int[] CpyArrayRev(int arr1[])
    {
       int[] arr2=new int[arr1.length];
       
        for(int i=0,j=0;i<arr1.length;i++,j++)
        {
            arr2[j]=arr1[i];

        }

        

        return arr2;
    }
}

class assignment41_4
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

       

        MyArray mobj=new MyArray();
        int[] iRet=new int[ilen];

        iRet= mobj.CpyArrayRev(arr);
       
        System.out.println("Array Copy into another array:");
        for(int i=0;i<iRet.length;i++)
        {
            System.out.print(iRet[i]+"\t");
        }

        
    }
}