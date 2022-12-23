package Templet;
import java.util.*;
public class Number
{
    public Integer arr[];
    public void Accept()
    {
       Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the length of array:");
        int len=sobj.nextInt();

        arr=new Integer[len];

        System.out.println("Enter the element of array:");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sobj.nextInt();
        }
    }

    public void Display()
    {
         System.out.println("the element of array:");

        for(int i=0;i<arr.length;i++)
        {
           System.out.println(arr[i]);
        }

    }
}
