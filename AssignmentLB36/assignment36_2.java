import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        char ch='A';
        char ch1='a';
        for(int i=0;i<iRow;i++)
        {
            ch='A';
            ch1='a';
            for(int j=0;j<iCol;j++)
            {
                if(i%2==0)
                {
                System.out.print(ch1+"\t");
                ch1++;
                }
                else
                {
                    System.out.print(ch+"\t");
                }
                ch++;
                
            }
            System.out.println();
       
       
        }
    }
}

class assignment36_2
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        int iR=sobj.nextInt();

        System.out.println("Enter the number of columns:");
        int iC=sobj.nextInt();

        Pattern pobj=new Pattern();

        pobj.Display(iR,iC);
    }
}