import java.util.*;

class Exceptiondemo2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Arr[] = {11,21,51,101,111};
        
        int index = 0;

        System.out.println("Enter The Index:");
        index= sobj.nextInt();
  
        System.out.println("Element is : "+Arr[index]);

        System.out.println("End of main");
        
    }
}

//Enter The Index:
//4
//Element is : 111
//End of main

//========================================  Creating exception 
//Enter The Index:
//6
//Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 6 out of bounds for length 5
//        at Exceptiondemo2.main(Exceptiondemo2.java:16)
//========================================