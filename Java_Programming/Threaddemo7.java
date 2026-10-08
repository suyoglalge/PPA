class Demo extends Thread //creating class thread
{
    public void run()
    {
        System.out.println("Inside Thread is running...."+Thread.currentThread().getName());
    }
    
}public class Threaddemo7
    {
    public static void main(String[] args)throws Exception
    {
        System.out.println("Inside main thread...");

        Demo dobj1 = new Demo(); //created new thread
        Demo dobj2 = new Demo(); //created new thread

        dobj1.setName("First_thread");
        dobj1.setName("Second_thread");

        
        dobj1.start();
        dobj2.start(); 

        dobj1.join();
        dobj2.join();
        
        System.out.println("End of main thread");//Issue
    }
}

