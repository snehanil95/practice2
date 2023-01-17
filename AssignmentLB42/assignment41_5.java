import java.util.*;

import javax.lang.model.util.ElementScanner6;


class MyArray
{
    public boolean CpyArrayRev(int arr1[])
    {
      
       int iStart=0,iEnd=arr1.length-1;
        boolean flag=true;
       int temp1=arr1[0];
       int rev=0,Digit=0;
       
       while(iStart<iEnd)
       {
        if(arr1[iStart]==arr1[iEnd])
        {
             temp1=arr1[iStart];

            while(temp1 != 0)
            {
                Digit=temp1%10;
                rev=(Digit)+(rev*10);
                temp1=temp1/10;
            }
            if(rev !=arr1[iStart])
            {
                flag=false;
                break;
            }

        }
        
        else
       {
        flag=false;
        break;
       }
       iStart++;
       iEnd--;
       rev=0;
    }
   return flag;
    }
}

class assignment41_5
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
        

       boolean bRet= mobj.CpyArrayRev(arr);
       
       System.out.println(bRet);
       
        
    }
}