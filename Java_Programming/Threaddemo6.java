class Demo extends Thread //creating class thread
{
    public void run()
    {
        System.out.println("Inside Thread is running");
    }
    
}public class Threaddemo6
    {
    public static void main(String[] args)throws Exception
    {
        System.out.println("Inside main thread...");

        Demo dobj1 = new Demo(); //created new thread

        Demo dobj2 = new Demo(); //created new thread

        dobj1.start();
        dobj2.start(); 

        dobj1.join();
        dobj2.join();
        
        System.out.println("End of main thread");//Issue
    }
}
/*
Output:
Inside main thread...
Inside Thread is running
Inside Thread is running
End of main thread.....<- this line comes bcoz of join
*/

//main thread have to wait till last..death.

//.join example phoinix mall exampple
