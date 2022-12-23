import java.util.*;

class Numbers
{
   
    public int factorial(int iValue)
    {
        int Fact=1;
        //System.out.println("Even factors are:");
        for(int iCnt=1;iCnt<=(iValue/2);iCnt++)
        {
            if(iValue%iCnt ==0)
            {
               Fact=Fact*iCnt;
            }
        }
        return Fact;
    }
    
}
class program153
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo1=sobj.nextInt();
        Numbers eobj=new Numbers();

        int iRet=eobj.factorial(iNo1);

        System.out.println("Factorial of given number:"+iRet);
    }
}