import java.util.Scanner;
class Multiplication
{
   public static void main(String[] args) 
    {
        int a,b,c;

        Scanner obj = new Scanner(System.in);

        System.out.println("Enter First number:");
        a=obj.nextInt();

        System.out.println("Enter Second number:");
        b=obj.nextInt();

        c=a*b;

        System.out.println("Multiplication is :"+c);

    }


}