//common factor
import java.util.*;

class Numbers
{
   public int iValue1;
   public int iValue2;
    public Numbers(int i,int j)
    {
        iValue1=i;
        iValue2=j;
    }

    public void Commonfactor()
    {
        int Value1;
        System.out.println("Common factors are:");
        //min number jo asel tya numbers che factor jithparyant nightil tithparyantche
        //common factor mhanun below condition applied
        for(int iCnt=1;(iCnt<=(iValue1/2) && (iCnt<=iValue2/2));iCnt++)
        {
            if((iValue1%iCnt ==0) && (iValue2%iCnt == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
    
}
class program152
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo1=sobj.nextInt();

        System.out.println("Enter the number:");
        int iNo2=sobj.nextInt();

        Numbers eobj=new Numbers(iNo1,iNo2);

        eobj.Commonfactor();


    }
}