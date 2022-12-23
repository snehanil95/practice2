//not Working
import java.util.*;

class StringDemo
{
    public void chkstr(String s1)
    {
         char s3[]=s1.toCharArray();
            char s2[];
   
        
                for(int i=0;i<s1.length();i++)
                {
                    if((s3[i]>='A')&&(s3[i]<='Z'))
                    {
                       // s3=s3+s2.toUpperCase().charAt(i);
                    }
                    else if((s3[i]>='a')&&(s3[i]<='z'))
                    
                    {
                      // s3=(Character)(s3[i]+'A'-'a');
                    }
                   
                   System.out.println(s3[i]);
                     }
                
           
    }
}
class assignment35_4
{

    public static void main(String a[])
    {

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the First string:");
        String str1=sobj.nextLine();

        StringDemo obj=new StringDemo();

     obj.chkstr(str1);

      

    }
}
