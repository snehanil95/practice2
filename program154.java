import java.util.*;

class Numbers
{
  
    public int DigitCnt(int iValue)
    {
        int iCnt=0;
        int Digit=0;
        int temp=iValue;
        
       while(temp !=0)
       {
        Digit=temp%10;
        iCnt++;
        temp=temp/10;
       }
       return iCnt;
    }

    public int sumDigit(int Base,int Index)
    {
        int iAns=1;
     //int Digit=1;
        for(int i=0;i<Index;i++)
        { 
            iAns=iAns*Base;
        }
        return iAns;
    }

    public boolean CkhAmstron(int iNo1)
    {
        int iTemp=iNo1;
        System.out.println(iTemp);
    int sum=0;
    int iDigit=0;

    int iCout=DigitCnt(iNo1);
    System.out.println(iCout);
    while(iNo1 !=0)
    {
        iDigit=iNo1%10;
        int power=sumDigit(iDigit,iCout);
        //System.out.println(iDigit);
        sum=sum+power;
        
        iNo1=iNo1/10;
    }
    System.out.println(sum);
        if(iTemp==sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}
class program154
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo1=sobj.nextInt();
        Numbers eobj=new Numbers();

        boolean bRet=eobj.CkhAmstron(iNo1);
    if(bRet==true)
    {
        System.out.println("Number is amstron");

    }
else{
    System.out.println("Number is not amstron");
}


    }
}