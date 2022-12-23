import java.util.*;
class pattern
{

    public void Display(int no)
    {
        int iDigit=0;
        int n=no;
    int temp=no;
            while(temp!=0)
            {
                while(n!=0)
                {
                    iDigit=n%10;
                    System.out.print(iDigit+"\t");
                    n=n/10;
                }
                n=no;
            System.out.println();
            temp=temp/10;
          
            }
    }
}
class program171
{
    public static void main(String a[])
    {
        
        pattern pobj=new pattern();

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number:");
        int str=sobj.nextInt();

        

        pobj.Display(str);

    }
}