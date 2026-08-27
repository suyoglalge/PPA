import java.util.Scanner;

class Division
{
public static void main(String[] args) 
    {
        int a,b,Div;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number:");
        a=sobj.nextInt();

        System.out.println("Enter first number:");
        b=sobj.nextInt();

        Div=a/b;

        System.out.println("Division is :"+Div);

    }

}