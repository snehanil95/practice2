import java.util.*;

class MarvellousX
{

    public int SmallCnt(String s)
    {
        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
            System.out.println(s.charAt(i)); 

               if((s.charAt(i)>='a')&&(s.charAt(i)<='z'))
               {
                iCnt++;
               }
        
        
        
        }
    return iCnt;
    }

     public int LargeCnt(String s)
    {
        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
            //System.out.println(s.charAt(i)); 

               if((s.charAt(i)>='A')&&(s.charAt(i)<='Z'))
               {
                iCnt++;
               }
        
        
        
        }
    return iCnt;
    }

     public int DigitCnt(String s)
    {
        int iCnt=0;
        for(int i=0;i<s.length();i++)
        {
            //System.out.println(s.charAt(i)); 

               if((s.charAt(i)>='0')&&(s.charAt(i)<='9'))
               {
                iCnt++;
               }
        
        
        
        }
    return iCnt;
    }
}
class program162
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Ente your name:");
        String str=sobj.nextLine();

        System.out.println("Welcome "+str);

        System.out.println("Number of characters are: "+str.length());

        MarvellousX obj=new MarvellousX();
        //obj.Display(str);

        int iRet=obj.SmallCnt(str);
    System.out.println("Number of Largest are: "+iRet);

      iRet=obj.DigitCnt(str);
    System.out.println("Number of Digit are: "+iRet);

        
    }
}