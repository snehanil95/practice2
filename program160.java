import java.util.*;


class program160
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Ente your name:");
        String str=sobj.nextLine();

        System.out.println("Welcome "+str);

        System.out.println("Number of characters are: "+str.length());

        for(int i=0;i<str.length();i++)
        {
            System.out.println(str.charAt(i));    //use of charAt() method
        }
    
    }
}