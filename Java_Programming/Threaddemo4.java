class Demo implements Runnable  
{
    public void run()
    {
        System.out.println("Inside Thread is running");
    }
    
}public class Threaddemo4
    {
    public static void main(String[] args)
    {
        System.out.println("Inside main thread...");

        Thread dobj1 = new Thread(new Demo());

        dobj1.start(); //Error
        
    }
}
