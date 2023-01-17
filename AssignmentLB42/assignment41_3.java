import java.util.*;


class MyArray
{
    public int[] CpyArrayRev(int arr1[])
    {
       int[] arr2=new int[arr1.length];
       
        for(int i=arr1.length-1,j=0;i>=0;i--,j++)
        {
            arr2[j]=arr1[i];

        }

        

        return arr2;
    }
}

class assignment41_3
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
       
        System.out.println("Array After reversed:");
        for(int i=0;i<iRet.length;i++)
        {
            System.out.print(iRet[i]+"\t");
        }

        
    }
}