import java.util.*;

class Digit
{
    public int CountOdd(int n)
    {
        int evenCnt=0;
        int iDigit=0;
        while(n!=0)
        {
             iDigit=n%10;

             if(iDigit%2 != 0)
             {
               System.out.println(iDigit);
                evenCnt++;
             }
             n=n/10;
        }
        return evenCnt;
    }
}
class assignment32_2

{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
         int iNo=sobj.nextInt();

        Digit dobj=new Digit();
        int iRet=dobj.CountOdd(iNo);
        System.out.println("Number of odd digit:"+iRet);

    }

}