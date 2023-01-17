import java.util.*;

import javax.lang.model.util.ElementScanner6;


class MyArray
{
    public void CpyArrayRev(int arr1[])
    {
      
       int iStart=0,len=arr1.length-1;
       
       int temp1=arr1[0];
       int rev=0,Digit=0;
       
       while(iStart<=len)
       {
        
             temp1=arr1[iStart];

            while(temp1 != 0)
            {
                Digit=temp1%10;
                rev=(Digit)+(rev*10);
                temp1=temp1/10;
            }
            System.out.print(rev+"\t");

       iStart++;
       
       rev=0;
    }
  
}
}

class assignment43_1
{
public static void main(String[] args) 
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the length of first array:");
        int ilen=sobj.nextInt();

        System.out.println("Enter the element of Array:");
            int arr[]=new int[ilen];
        for(int i=0;i<ilen;i++)
        {
            arr[i]=sobj.nextInt();
        }

       

        MyArray mobj=new MyArray();
        

       mobj.CpyArrayRev(arr);
       
        
    }
}