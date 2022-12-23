import java.util.*;

class ArrayLaout
{
    public int arr[];
    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the length of aarry:");
        int N=sobj.nextInt();
        //public int arr[];
         arr=new int[N];
        System.out.println("Enter the element of aarry:");
        for(int i=0;i<N;i++)
        {
           arr[i] = sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("the element of aarry:");
        for( int i=0;i<arr.length;i++)
        {
            if((arr[i]%5 == 0)&&(arr[i]%2==0))
        
           System.out.println(arr[i]+"\t");
        }
    }
   
}

class AssignmentLB32_3


{
    public static void main(String a[])
    {
        ArrayLaout aobj=new ArrayLaout();
        aobj.Accept();
        aobj.Display();
       
    }
}