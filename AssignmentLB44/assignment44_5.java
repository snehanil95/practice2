import java.util.*;

import javax.lang.model.util.ElementScanner6;


class MyArray
{
    public void ArrayOpr(int arr1[])
    {
      int i=0;
       for(int iCnt=0;iCnt<arr1.length;iCnt++)
       {
         i=0;
          while(i!=arr1[iCnt])
          {
            System.out.print("*"+"\t");
            i++;
          }
          System.out.println(" ");
       }
  
}
}

class assignment44_5
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