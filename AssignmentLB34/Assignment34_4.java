import java.util.*;
import Templet.Number;
class NumberX extends Number
{
    public void Check(int Start,int End)
    {
        int i=-1;
        for(i=arr.length-1;i>0;i--)
        {
            if((arr[i]>Start)&&(arr[i]<End))
            {
                System.out.println(arr[i]);

            }

        }
      
    }
}
class Assignment34_4
{
    public static void main(String argv[])
    {
        Scanner sobj=new Scanner(System.in);

        NumberX nob=new NumberX();

        nob.Accept();
        nob.Display();

        System.out.println("Enter the range array:");

        int iNo1=sobj.nextInt();
        int iNo2=sobj.nextInt();

        System.out.println("the elements between range array:");
        nob.Check(iNo1,iNo2);
     
    }
}
