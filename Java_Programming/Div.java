import java.util.Scanner;
class Div
{
    public static void main(String[] args) {
        Scanner Sobj= new Scanner(System.in);

        int no1,no2,Div;

        System.out.println("Enter first number :");
        no1=Sobj.nextInt();

        System.out.println("Enter Second number :");
        no2=Sobj.nextInt();

        Div=no1/no2;

        System.out.println("The dividon of two number is :"+Div);

    }

}