import java.util.*;
import Arithmatic.*;


class program148
{

    public static void main(String a[])
    {
        int iNo1=0,iNo2=0,iAns=0;

        Scanner sobj=new Scanner(System.in);
        
        
        
        System.out.println("Enter the first number:");
         iNo1=sobj.nextInt();

         System.out.println("Enter the Second number:");
         iNo2=sobj.nextInt();

        Arithmatic aobj=new Arithmatic(iNo1,iNo2);

        iAns=aobj.Addition();

        System.out.println("Addition is:"+iAns);

    }
}