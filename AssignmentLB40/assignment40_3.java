import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
       
        for(int i=1;i<=iRow;i++)
        {
         int k=1;   
            for(int j=1;j<=iCol;j++)
            {
                if(j!=(i+1))
                {
                   System.out.print("*\t"); 
                }
                else{
                     System.out.print("*\t"); 
                }
            }
            System.out.println();
       
       
        }
    }
}

class assignment40_3
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