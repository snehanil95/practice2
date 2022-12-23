import Sneha.program156;
import java.util.*;
/*

class ArrayX
{
 public int Arr[];

 public ArrayX(int iSize)
 {
    Arr=new int[iSize];
 }
public void Accept()
{
  Scanner sobj=new Scanner(System.in);

  System.out.println("Enter the "+Arr.length+" array:");

  for(int iCnt=0;iCnt<Arr.length;iCnt++)
  {
    System.out.println("Enter the elements  "+(iCnt+1));

   Arr[iCnt] =sobj.nextInt();
  }
}
public void Display()
{
    System.out.println("Elements of arr:");

    for(int iCnt=0;iCnt<Arr.length;iCnt++)
    {

        System.out.println(Arr[iCnt]+"\t");
    }
    System.out.println();
}
}
*/

class MarvellousX extends program156
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public int Additon()
    {
        int iSum=0;

        for(int iCnt=0;iCnt<Arr.length;iCnt++)
        {
            iSum=iSum+Arr[iCnt];
        }
        return iSum;
    }
}

class program155
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("How many element in array:");
        int iSize=sobj.nextInt();

        MarvellousX obj=new MarvellousX(iSize);

        obj.Accept();
        obj.Display();
        int iRet=obj.Additon();
        System.out.println("Addition is:"+iRet);
    }
}
