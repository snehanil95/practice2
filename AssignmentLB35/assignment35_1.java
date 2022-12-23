import java.util.*;

class StringDemo
{
    public void StrNCat(String s1,String s2,int N)
    {
        String s3=s1+s2;
       
         s1.toCharArray();
            s2.toCharArray();
            
            
            char s4[]=s3.toCharArray();

        if(s2.length()>N)
        
        {
                for(int i=0;i<((s1.length()))+N;i++)
                {
                   System.out.println(s4[i]);
                    
                    
                }
                
            
        }
        
    }
}
class assignment35_1
{

    public static void main(String a[])
    {

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the First string:");
        String str1=sobj.nextLine();

         System.out.println("Enter the Second string:");
        String str2=sobj.nextLine();

          System.out.println("Enter the length of 2 str upto concat:");
        int num=sobj.nextInt();

        StringDemo obj=new StringDemo();

     obj.StrNCat(str1,str2,num);

        

    }
}