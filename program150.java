import java.util.*;

class Numbers
{
   public int iValue;
    public Numbers(int n)
    {
        iValue=n;
    }

    public void Evenfactor()
    {
        System.out.println("Even factors are:");
        for(int iCnt=2;iCnt<=(iValue/2);iCnt=iCnt+2)
        {
            if(iValue%iCnt ==0)
            {
                System.out.println(iCnt);
            }
        }
    }
    
}
class program150
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo1=sobj.nextInt();
        Numbers eobj=new Numbers(iNo1);

        eobj.Evenfactor();


    }
}