import java.util.*;
class pattern
{

    public void Display(String s)
    {
        int i=0,j=0;
    int iCnt=0;
    char arr[]=s.toCharArray();
    //String s="HELLO"
        for(i=0;i<arr.length;i++)
        {
            for(j=0;j<arr.length;j++)
            {
                System.out.print(arr[j]+"\t");
                iCnt++;

               
            }
            System.out.println();
        }
    }
}
class program170
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