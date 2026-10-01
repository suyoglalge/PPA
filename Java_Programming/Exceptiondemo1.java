import java.util.*;

class Exceptiondemo1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0 , no2 = 0 , Ans=0;

        System.out.println("Enter first number:");
        no1= sobj.nextInt();

        System.out.println("Enter Second number:");
        no2= sobj.nextInt();
    
        Ans = no1/no2;  //Exception prone code(Exception yenyachi shakyata aahe)
        
        System.out.println("Division is : "+Ans);
        
    }
}

//Error accurs as:

//C:\Users\Suyog\Desktop\PPA\Java_Programming>java Exceptiondemo1.java
//Enter first number:
//10
//Enter Second number:
//0
//Exception in thread "main" java.lang.ArithmeticException: / by zero
//        at Exceptiondemo1.main(Exceptiondemo1.java:17)