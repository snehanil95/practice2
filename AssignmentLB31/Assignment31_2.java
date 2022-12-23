import java.util.*;

class StringDemo
{
    public int CountCapital(String s)
    {
        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
        if((s.charAt(i)>='a')&&(s.charAt(i)<='z'))
        {
            iCnt++;
        }
        }
        return iCnt;
    }
}
class Assignment31_2
{
    public static void main(String a[])
    {
        
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string:");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();

       int iRet= obj.CountCapital(str);

       System.out.println("Number of Small letters:"+iRet);


    }
}