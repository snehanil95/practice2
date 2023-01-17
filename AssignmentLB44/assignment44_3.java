import java.util.*;

import javax.lang.model.util.ElementScanner6;


class MyArray
{
    public int ArrayOpr(char arr1[],char ch)
    {
      
       int iStart=0,len=arr1.length;
       int iCnt=0;
       
       char ch1;
       while(iStart<len)
       {
        ch1=arr1[iStart];
        if(Character.isUpperCase(ch1))
        {
            ch1=Character.toLowerCase(ch1);
        }
            
               //System.out.println(ch1);
               if(ch1==ch)
               {
                  iCnt++;
                 
               }
               
        
        iStart++;    
    }
  return iCnt;
}
}

class assignment44_3
{
public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the length of first array:");
        int ilen=sobj.nextInt();

        System.out.println("Enter the element of Array:");
            char arr[]=new char[ilen];
        for(int i=0;i<ilen;i++)
        {
            arr[i]=sobj.next().charAt(0);
        }

       System.out.println("Enter the element to search count:");
        char ch=sobj.next().charAt(0);

        MyArray mobj=new MyArray();
        

   int iRet= mobj.ArrayOpr(arr,ch);

      System.out.println("occurance of "+ch+"is: " +iRet);
        
    }
}