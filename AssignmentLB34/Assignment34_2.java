import java.util.*;
import Templet.Number;
class NumberX extends Number
{
    public int Check(int n)
    {
        int i=-1;
        for(i=0;i<arr.length;i++)
        {
            if(arr[i]== n)
            {
                break;
            }
        }
        return i;
    }
}
class Assignment34_2
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
