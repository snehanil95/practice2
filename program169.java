import java.util.*;
class pattern
{

    public void Display(String s)
    {
        int i=0,j=0;
    int iCnt=0;
    //String s="HELLO"
        for(i=0;i<s.length();i++)
        {
            for(j=0;j<s.length();j++)
            {
                System.out.print(s.charAt(j)+"\t");
                iCnt++;

               
            }
            System.out.println();
        }
    }
}
class program169
{
    public static void main(String a[])
    {
        
        pattern pobj=new pattern();

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter string:");
        String str=sobj.nextLine();

        

        pobj.Display(str);

    }
}