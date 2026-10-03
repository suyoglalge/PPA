import java.util.*;

class Exceptiondemo2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Arr[] = {11,21,51,101,111};
        
        int index = 0;
    try{
        System.out.println("Enter The Index:");
        index= sobj.nextInt();
  
        System.out.println("Element is : "+Arr[index]);
    }
    catch(ArrayIndexOutOfBoundsException aobj)
    {
        System.out.println("inside of catch"+aobj);
    }
    
        System.out.println("End of main");
    }
}
