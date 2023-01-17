import java.util.*;

import javax.lang.model.util.ElementScanner6;


class MyArray
{
    public int ArrayOpr(char arr1[])
    {
      
       int iStart=0,len=arr1.length;
       int iUCnt=0,iLCnt=0;
       
       char ch1;
       while(iStart<len)
       {
        ch1=arr1[iStart];
        if(Character.isUpperCase(ch1))
        {  
                 
        iUCnt++;
                
        } 
        else
        {
            iLCnt++;
        }

        
        iStart++;    
    }
  return iLCnt-iUCnt;
}
}

class assignment44_4
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

       

        MyArray mobj=new MyArray();
        

   int iRet= mobj.ArrayOpr(arr);

   if(iRet<0)
   {
    iRet=-iRet;
   }
      System.out.println("Difference between occurence of capital and small character " +iRet);
        
    }
}