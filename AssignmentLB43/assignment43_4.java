import java.util.*;

import javax.lang.model.util.ElementScanner6;


class MyArray
{
    public int ArrayOpr(char arr1[])
    {
      
       int iStart=0,len=arr1.length-1;
       int iCnt=0;
       char ch;
       while(iStart<=len)
       {
        ch=arr1[iStart];
        if(Character.isLowerCase(ch))
        {
            iCnt++;
        }
        
        iStart++;    
    }
  return iCnt;
}
}

class assignment43_3
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

      System.out.println("Number of Lower case characters:"+iRet);
       
        
    }
}