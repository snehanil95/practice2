import java.util.*;
import Templet.Number;
class NumberX extends Number
{
    public boolean Check(int n)
    {
        boolean flag=false;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]== n)
            {
                flag=true;
            }
        }
        return flag;
    }
}
class Assignment34_1
{
    public static void main(String argv[])
    {
        Scanner sobj=new Scanner(System.in);

        NumberX nob=new NumberX();

        nob.Accept();
        nob.Display();

        System.out.println("Enter the element search from array:");

        
        int iSearch=sobj.nextInt();

                boolean bRet=nob.Check(iSearch);

        if(bRet==true)
        {
            System.out.println("Number is found");
        }
        else
        {
            System.out.println("Number is not found");
        }
    }
}
