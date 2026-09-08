import java.util.*;
public class Ifelse
{
    public static void main(String[] args)
     {

        Scanner sobj = new Scanner(System.in);

        int no = 0;
        System.out.println("Enter first number :");
        no = sobj.nextInt();

        if (no>=18)
        {
            System.out.println("You are eligible to Vote");
            
        }
        else
        {
            System.out.println("You are not eligible to vote");
        }
     }
}
