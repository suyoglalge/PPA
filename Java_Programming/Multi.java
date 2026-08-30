import java.util.Scanner;
class Multi
{
    public static void main(String[] args) 
    {
        Scanner obj = new Scanner(System.in);
        int no1,no2,Multiplication ;

        System.out.println("Enter First Number :");
        no1=obj.nextInt();

        System.out.println("Enter Second Number :");
        no2=obj.nextInt();

        Multiplication=no1*no2;

        System.out.println("The Multiplication is :"+Multiplication);
        
    }


}