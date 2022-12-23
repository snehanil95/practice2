import java.util.*;

class Pattern
{
     public void Dislpay(String s)
    {

        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<i;j++)
            {
                System.out.print(s.charAt(j)+"\t");
            }
            System.out.println();
        }
    }
    public void Dislpay1(String s)
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
}

class assignment38_5
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the String:");
        String str=sobj.nextLine();


        Pattern pobj=new Pattern();

        pobj.Dislpay(str);
        pobj.Dislpay1(str);


    }
}