import java.util.*;

import javax.lang.model.util.ElementScanner6;


class MyArray
{
    public void ArrayOpr(int arr1[])
    {
      
       int iStart=0,len=arr1.length-1;
        
       int temp1=arr1[0];
       int sum=0,Digit=0;
       
       while(iStart<=len)
       {
        
             temp1=arr1[iStart];

            while(temp1 != 0)
            {
                Digit=temp1%10;
                sum=sum+Digit;
                temp1=temp1/10;
            }
            System.out.print(sum+"\t");

       iStart++;
       
       sum=0;
    }
  
}
}

class assignment43_2
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
        

       mobj.ArrayOpr(arr);
       
        
    }
}