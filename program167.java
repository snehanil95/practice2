import java.util.*;
class pattern
{

    public void Display(int iRow,int iCol)
    {
        int i=0,j=0;
    int iCnt=1;
        for(i=0;i<iRow;i++)
        {
            for(j=0;j<iCol;j++)
            {
                System.out.print(iCnt+"\t");
                iCnt++;

                if(iCnt>9)
                {

                    iCnt=1;
                }
            }
            System.out.println();
        }
    }
}
class program167
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