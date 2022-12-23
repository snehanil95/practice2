import java.util.*;

class Digit
{
    public int Count(int n)
    {
        int Cnt=0;
        int iDigit=0;
        while(n!=0)
        {
             iDigit=n%10;

             if((iDigit>3) && (iDigit<7))
             {
               System.out.println(iDigit);
                Cnt++;
             }
             n=n/10;
        }
        return Cnt;
    }
}
class assignment32_3

{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
         int iNo=sobj.nextInt();

        Digit dobj=new Digit();
        int iRet=dobj.Count(iNo);
        System.out.println("Number of event digit:"+iRet);

    }

}