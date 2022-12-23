import java.util.*;

class StringDemo
{
    public void DisplayRev(String s)
    {
        int iStart=0;
        int iEnd=s.length()-1;
        char iTemp;
        char arr[]=s.toCharArray();

        while(iStart<iEnd)
        {
            iTemp=arr[iStart];
            arr[iStart]=arr[iEnd];
            arr[iEnd]=iTemp;

            iStart++;
            iEnd--;
        }

    //System.out.println(s);
    }
}
class Assignment31_5 
{
    public static void main(String a[])
    {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();

    obj.DisplayRev(str);

       
       

    }
}
