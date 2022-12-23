import java.util.*;

class StringDemo
{
    public int CountCapital(String s)
    {
        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
        if((s.charAt(i)>='A')&&(s.charAt(i)<='Z'))
        {
            iCnt++;
        }
        }
        return iCnt;
    }
}
class Assignment31_1 extends StringDemo
{
    public static void main(String a[])
    {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();

       int iRet= obj.CountCapital(str);

       System.out.println("Number of chapital letters:"+iRet);


    }
}
