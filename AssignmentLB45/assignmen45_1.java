import java.util.Scanner;

import java.util.*;

class MyStr
{
    public int CountStr(String str)
    {
        int iCnt=0;

        
        return iCnt;
    }
}
class assignment45_1
{
    public static void main(String argv[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string");
        string str=sobj.nextLine();

        MyStr mobj=new MyStr();

        System.out.println("Enter the string");
        string search=sobj.nextLine();

        int iRet=mobj.CountStr(search);
    }
}