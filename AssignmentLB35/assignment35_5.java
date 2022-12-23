import java.util.*;

class StringDemo
{
    public boolean chkstrPali(String s1)
    {
           String s3=s1.toLowerCase();

           //System.out.println(s3);
         char s2[]=s3.toCharArray();
           boolean flag=true;
          
        for(int i=0,j=s1.length()-1;i<s1.length()/2;i++,j--)
        {
            if(s2[i]!=s2[j])
            {
                flag=false;
                break;
            }
              
             
              }
                
       return flag;    
    }
}
class assignment35_5
{

    public static void main(String a[])
    {

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the First string:");
        String str1=sobj.nextLine();

        StringDemo obj=new StringDemo();

     boolean bRet=obj.chkstrPali(str1);

        if(bRet==true)
        {
            System.out.println("String is palindrome");
        }
      else{
        System.out.println("String is not palindrome");
      }

    }
}
