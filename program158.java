import Sneha.program156;
import java.util.*;

class MarvellousX extends program156
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }
    boolean ChkPalindrom()
    {
       int iStart =0;
       int iEnd=Arr.length-1;
       boolean bFlag=true;

       while(iStart<iEnd)
       {
        if(Arr[iStart] != Arr[iEnd])
        {
            bFlag=false;
            break;
        }
        iStart++;
        iEnd--;
       }
       return bFlag;
    }
}
class program158
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("How many element in array:");
        int iSize=sobj.nextInt();

        MarvellousX obj=new MarvellousX(iSize);

        obj.Accept();
        obj.Display();

       boolean BRet=obj.ChkPalindrom();

       if(BRet==true)
       {
        System.out.println("AAray is palindrme");
       }
       else{
            System.out.println("AAray is pnot alindrme");

       }
        
    }
}