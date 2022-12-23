import java.util.*;

class MarvellousX
{

    public void Display(String s)
    {
        for(int i=0;i<s.length();i++)
        {
            System.out.println(s.charAt(i));    //use of charAt() method
        }
    
    }
}
class program161
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Ente your name:");
        String str=sobj.nextLine();

        System.out.println("Welcome "+str);

        System.out.println("Number of characters are: "+str.length());

        MarvellousX obj=new MarvellousX();
        obj.Display(str);
        
    }
}