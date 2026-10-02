import java.util.*;

public class Exceptiondemo1Xpractice 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0 , no2 = 0 , ans = 0;
    try
    {
        System.out.println("Enter First number");
        no1=sobj.nextInt();

        System.out.println("Enter Second number");
        no2=sobj.nextInt();

        ans = no1 / no2 ;

        System.out.println("Division o ftwo number is :"+ans);
    }
    catch(java.lang.ArithmeticException aobj)
    {
        System.out.println("Inside catch block"+aobj);
    }
    finally
    {
        System.out.println("Insdie Finallly Block");
    }
        
       
    }
    
}
