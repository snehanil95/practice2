import java.util.*;

class Pattern
{
   public String s;
    public Pattern(String str)
    {
        s=str;
    }
    public void Dislpay()
    {
      int j=0;
        for(int i=0;i<s.length();i++)
        {
            int k=0;
            for(j=0;j<s.length();j++)
            {
               if(i<=j)
               {
                System.out.print(s.charAt(k)+"\t");
                k++;
               }
                
            }
            System.out.println();
        }
    }
     public void Dislpay1()
    {

        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print(s.charAt(j)+"\t");
            }
            System.out.println();
        }
    }
}

class assignment38_4
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String:");
        String str=sobj.nextLine();


        Pattern pobj=new Pattern(str);

        pobj.Dislpay();

        pobj.Dislpay1();
    }
}