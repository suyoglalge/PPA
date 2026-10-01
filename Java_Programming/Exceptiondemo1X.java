import java.util.*;

class Exceptiondemo1X
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0 , no2 = 0 , Ans=0;
 
    try
    {
        System.out.println("Enter first number:");
        no1= sobj.nextInt();

        System.out.println("Enter Second number:");
        no2= sobj.nextInt();
    
        Ans = no1/no2;  //Exception prone code(Exception yenyachi shakyata aahe)
    }
    catch( java.lang.ArithmeticException aobj) //taken from exception
    {

        System.out.println("Exception occured:"+aobj); //aobj ni report mddhe ky lihl hot te disat
    }
    finally
    {
        System.out.println("come inside finally block");
    }

        System.out.println("Division is : "+Ans);
        
    }
}