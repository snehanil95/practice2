package Sneha;

import java.util.*;


public class program156

{

 public int Arr[];

 public program156(int iSize)
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
