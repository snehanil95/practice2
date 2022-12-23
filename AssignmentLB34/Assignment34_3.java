import java.util.*;
import Templet.Number;
class NumberX extends Number
{
    public int Check(int n)
    {
        int i=-1;
        for(i=arr.length-1;i>0;i--)
        {
            if(arr[i]== n)
            {
               break;
            }
        }
        return i;
    }
}
class Assignment34_3
{
    public static void main(String argv[])
    {
        Scanner sobj=new Scanner(System.in);

        NumberX nob=new NumberX();

        nob.Accept();
        nob.Display();

        System.out.println("Enter the element search from array:");

        
        int iSearch=sobj.nextInt();

                int iRet=nob.Check(iSearch);

        
            System.out.println("Number is  found at "+iRet+"th index position");
        
    }
}
