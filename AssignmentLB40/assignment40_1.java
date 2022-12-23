import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
       
        for(int i=0;i<iRow;i++)
        {
            
            for(int j=iCol-1;j>=0;j--)
            {
                if(i==j)
                {
                   System.out.print("#\t"); 
                }
            else
            {
                System.out.print("*\t");
                
            } 
                
            }
            System.out.println();
       
       
        }
    }
}

class assignment40_1
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