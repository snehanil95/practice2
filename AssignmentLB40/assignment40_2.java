import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
       
        for(int i=1;i<=iRow;i++)
        {
         int k=1;   
            for(int j=iCol;j>=1;j--)
            {
                if(i==j)
                {
                   System.out.print("#\t"); 
                }
                else if(i+k>=5)
                {
                        System.out.print("@\t");
                }
            else
            {
                System.out.print("*\t");
                
            } 
              k++;  
            }
            System.out.println();
       
       
        }
    }
}

class assignment40_2
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