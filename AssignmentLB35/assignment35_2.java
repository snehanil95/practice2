import java.util.*;

class StringDemo
{
    public boolean chkstr(String s1,String s2)
    {
        return s1.equals(s2);
    }
}
class assignment35_2
{

    public static void main(String a[])
    {

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the First string:");
        String str1=sobj.nextLine();

         System.out.println("Enter the Second string:");
        String str2=sobj.nextLine();

          

        StringDemo obj=new StringDemo();

     boolean bRet=obj.chkstr(str1,str2);

        if(bRet==true)
        {
            System.out.println("Strings are equals");
        }
        else
        {
            System.out.println("Strings are not equals");
        }

    }
}