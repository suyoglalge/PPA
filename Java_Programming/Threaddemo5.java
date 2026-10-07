class Demo extends Thread //creating class thread
{
    public void run()
    {
        System.out.println("Inside Thread is running");
    }
    
}public class Threaddemo5
    {
    public static void main(String[] args)
    {
        System.out.println("Inside main thread...");

        Demo dobj1 = new Demo(); //created new thread

        Demo dobj2 = new Demo(); //created new thread

        dobj1.start();
        dobj2.start(); 
        
        System.out.println("End of main thread");//Issue
    }
}
