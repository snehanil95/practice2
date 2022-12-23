import java.util.*;

class Digit
{
    public int DigitMult(int n)
    {
        int Mult=1;
        int iDigit=0;
        while(n!=0)
        {
             iDigit=n%10;

            Mult=Mult*iDigit;
             n=n/10;
        }
        return Mult;
    }
}
class assignment32_4

{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
         int iNo=sobj.nextInt();

        Digit dobj=new Digit();
        int iRet=dobj.DigitMult(iNo);
        System.out.println("Multiplication of digit:"+iRet);

    }

}