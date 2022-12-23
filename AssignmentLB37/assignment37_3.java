import java.util.*;

class Pattern
{
    public void Dislpay(int iRow,int iCol)
    {

        for(int i=1;i<=iRow;i++)
        {
            for(int j=iCol;j>0;j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    }
}

class assignment37_3
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number of row:");
        int iN1=sobj.nextInt();

        System.out.println("Enter the number of columns:");
        int iN2=sobj.nextInt();

        Pattern pobj=new Pattern();

        pobj.Dislpay(iN1,iN2);


    }
}