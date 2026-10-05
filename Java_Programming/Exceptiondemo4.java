import java.util.*;

class Ageinvalid extends Exception
{
    public Ageinvalid(String str)
    {
        super(str);
    }

}
class Exceptiondemo4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int age = 0;
        System.out.println("Entr your age");
        age = sobj.nextInt();
        try
        {
        if (age<18)
        {
            throw new Ageinvalid("You Are under Age");
        }
        else
        {
            System.out.println("Welcome to -----");
        }
    }
    catch(Ageinvalid aobj)
    {
        System.out.println("Exception occured due to age");
    } 

        
    }
}
