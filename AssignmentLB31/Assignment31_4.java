import java.util.*;
class StringDemo{

    public boolean ChkVowel(String s)
    {
        boolean flag=false;
        s.toLowerCase();
        for(int i=0;i<(s.length());i++)
        {
            if((s.charAt(i)=='a')||(s.charAt(i)=='u')||(s.charAt(i)=='o')||(s.charAt(i)=='i')||(s.charAt(i)=='e'))
                {
                     flag=true;
                }
                
        }
        return flag;
    }
}
class Assignment31_4
{
    public static void main(String a[])
    {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the String");

    String str=sobj.nextLine();

    StringDemo obj=new StringDemo();

    boolean bRet=obj.ChkVowel(str);

    if(bRet==true)
    {
        System.out.println("String contain vowels");
    }
    else{
        System.out.println("String not contain vowels");
    }
    }
}