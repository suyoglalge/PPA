class Demo implements Runnable  
{
    public void run()
    {
        System.out.println("Inside Thread is running");
    }
    
}public class Threaddemo3
    {
    public static void main(String[] args)
    {
        System.out.println("Inside main thread...");

        Demo dobj1 = new Demo(); //created new thread

        Demo dobj2 = new Demo(); //created new thread

        dobj1.start(); //Error
        dobj2.start(); //Error
    }
}
