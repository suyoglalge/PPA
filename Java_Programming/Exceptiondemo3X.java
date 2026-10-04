import java.util.*;
class Demo
{
    public static  int division(int no1 , int no2) throws ArithmeticException //kutrya psun savad
    //trows says if exception comes then this exception will come...saying other that if it comes
    //this will come u should handle


    
    {
        return no1/no2;
    }
}
class Exceptiondemo3X
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0 , no2 = 0 , Ans=0;

        System.out.println("Enter first number:");
        no1= sobj.nextInt();

        System.out.println("Enter Second number:");
        no2= sobj.nextInt();
    
        Ans = Demo.division(no1, no2);  
        
        System.out.println("Division is : "+Ans);
        
    }
}
