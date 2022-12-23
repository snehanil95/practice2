import java.util.*;
import Templet.Number;
class NumberX extends Number
{
    public int Check()
    {
        int i=0;
        int mult=1;
        for(i=arr.length-1;i>=0;i--)
        {
            if(arr[i]%2 != 0)
            {
               mult=mult*arr[i];
            }
        }
        return mult;
    }
}
class Assignment34_5
{
    public static void main(String argv[])
    {
        Scanner sobj=new Scanner(System.in);

        NumberX nob=new NumberX();

        nob.Accept();
        nob.Display();

        System.out.println("Enter the element search from array:");

                int iRet=nob.Check();

        
            System.out.println("product of odd elements:"+iRet);
        
    }
}
