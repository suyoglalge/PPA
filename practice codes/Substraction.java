import java.util.Scanner;
 class Substraction
 {
    public static void main(String A[])
    {
        int no1=0 ,no2=0 ,Sub=0;

        Scanner sobj= new Scanner (System.in);

        System.out.println("Enter first number :");
        no1=sobj.nextInt();

        System.out.println("Enter first number :");
        no2=sobj.nextInt();

        Sub=no1-no2;

        System.out.printf("Substraction is :"+Sub);




    }

    
}