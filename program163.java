import java.util.*;

class program163
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Ente your name:");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        //System.out.println(Arr);

        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }

    }
}