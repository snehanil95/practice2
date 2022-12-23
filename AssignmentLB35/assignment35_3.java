import java.util.*;

class StringDemo
{
    public boolean StrNCat(String s1,String s2,int N)
    {
        
         
            char s4[]=s1.toCharArray();
            char s3[]=s2.toCharArray();
    boolean flag=false;
        
                for(int i=0;i<N;i++)
                {
                    if(s4[i]==s3[i])
                    {
                        flag =true;
                    }
                   
                     }
                
            return flag;
        }
        
    
}
class assignment35_3
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

     boolean bRet=obj.StrNCat(str1,str2,num);

        if(bRet==true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}