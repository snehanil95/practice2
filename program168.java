import java.util.*;
class pattern
{

    public void Display(int iRow,int iCol)
    {
        int i=0,j=0;
    int iCnt=0;
        for(i=0;i<iRow;i++)
        {
            for(j=0;j<iCol;j++)
            {
                System.out.print(((iCnt%9)+1)+"\t");
                iCnt++;

               
            }
            System.out.println();
        }
    }
}
class program168
{
    public static void main(String a[])
    {
        
        pattern pobj=new pattern();

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int i=sobj.nextInt();

        System.out.println("Enter number of columns:");
        int j=sobj.nextInt();

        pobj.Display(i,j);

    }
}