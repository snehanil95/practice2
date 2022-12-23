import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int N=1;
        for(int i=1;i<=iRow;i++)
        {
            //ch='A';
            for(int j=1;j<=iCol;j++)
            {
                System.out.print(N+"\t");
                
               N++;  
                
                
            }
            
            
          
          
            System.out.println();
       
       
        }
    }
}

class assignment36_5
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