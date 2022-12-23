import Sneha.program156;
import java.util.*;

class MarvellousX extends program156
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }
    void Reverse()
    {
        int iStar=0;
        int iEnd=Arr.length-1;
        int temp=0;
        while(iStar< iEnd)
        {
            temp=Arr[iStar];
            Arr[iStar]=Arr[iEnd];
            Arr[iEnd]=temp;

            iStar++;
            iEnd--;
        }

    }

}
class program157
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("How many element in array:");
        int iSize=sobj.nextInt();

        MarvellousX obj=new MarvellousX(iSize);

        obj.Accept();
        obj.Display();
        obj.Reverse();
        obj.Display();
    }
}