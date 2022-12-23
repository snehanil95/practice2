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
        int min=iValue1;
        System.out.println("Common factors are:");
        if(iValue1>iValue2)
        {
            min=iValue2;

        }
        else
        {
            min=iValue1;
        }
        for(int iCnt=2;iCnt<=(min/2);iCnt++)
        {
            if((iValue1%iCnt ==0) &&(iValue2%iCnt == 0))
            {
                System.out.println(iCnt);
            }
        }
    }
    
}
class program151
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