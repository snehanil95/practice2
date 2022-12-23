import java.util.*;
class program147
{
    static int Addition(int i,int j)
    {
        int Sum=0;
        Sum=i+j;
        return Sum;
    }

    public static void main(String a[])
    {
        int iNo1=0,iNo2=0,iAns=0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the first number:");
         iNo1=sobj.nextInt();

         System.out.println("Enter the Second number:");
         iNo2=sobj.nextInt();

        iAns=Addition(iNo1,iNo2);

        System.out.println("Addition is:"+iAns);

    }
}