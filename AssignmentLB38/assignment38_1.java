import java.util.*;

class Pattern
{
    public void Dislpay(String s)
    {

        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                System.out.print(s.charAt(j)+"\t");
            }
            System.out.println();
        }
    }
}

class assignment38_1
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String:");
        String str=sobj.nextLine();


        Pattern pobj=new Pattern();

        pobj.Dislpay(str);


    }
}