//take two number from user , send it to constructor , then from constructor to Additon () , then call AAddition method

import java.util.*;

class Demo
{
    public int no1 , no2 ;

    Demo(int x , int y)
    {
        no1 = x ;
        no2 = y;
    }

   public int Addition(int m , int n)
    {
        int add;
        add = m +n;
        return add;
    }
}



public class IfelseX 
{
    public static void main(String[] args) 
    {
        Scanner obj = new Scanner (System.in);
       int i , j , result;

       System.out.println(" Enter first  number:");
       i = obj.nextInt();

       System.out.println(" Enter Second  number:");
       j = obj.nextInt();

       Demo dobj = new Demo(i , j);

      result =  dobj.Addition(dobj.no1 , dobj.no2);
       System.out.println("Addition is :"+result);
    }
}
