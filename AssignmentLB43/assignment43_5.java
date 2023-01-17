import java.util.*;

import javax.lang.model.util.ElementScanner6;


class MyArray
{
    public void ArrayOpr(int arr1[])
    {
      
       int iStart=0,len=arr1.length-1;
       
       while(iStart<=len)
       {
        if(arr1[iStart]>=75)
        {
            System.out.println("First class with distigution");
        }
        else if(arr1[iStart]>=60)
        {
            System.out.println("First class");
        } 
        else if(arr1[iStart]>=45)
        {
            System.out.println("Higher secondry class");
        }
        else if(arr1[iStart]>=35)
        {
            System.out.println("Pass class");
        } 
        else     
       {
        System.out.println("Fail");
       }
        iStart++;
       
       
    }
  
}
}

class assignment43_5
{
public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the length of first array:");
        int ilen=sobj.nextInt();

        System.out.println("Enter the Marks:");
            int arr[]=new int[ilen];
        for(int i=0;i<ilen;i++)
        {
            arr[i]=sobj.nextInt();
        }

       

        MyArray mobj=new MyArray();
        

       mobj.ArrayOpr(arr);
       
        
    }
}