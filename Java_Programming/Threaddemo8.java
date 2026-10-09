class Demo extends Thread //creating class thread
{
    public void run()
    {
        int i=0;
        for(i=1 ; i<10 ; i++)
        {
        System.out.println("Thread"+Thread.currentThread().getName()+" "+i);
        }
    }   

    
}public class Threaddemo8
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
/*
Inside main thread...
ThreadThread-1 1
ThreadThread-1 2
ThreadSecond_thread 1
ThreadThread-1 3
ThreadSecond_thread 2
ThreadSecond_thread 3
ThreadSecond_thread 4
ThreadSecond_thread 5
ThreadSecond_thread 6 
ThreadSecond_thread 7                loop mule as print hoty
ThreadSecond_thread 8
ThreadThread-1 4
ThreadThread-1 5
ThreadSecond_thread 9
ThreadThread-1 6
ThreadThread-1 7
ThreadThread-1 8
ThreadThread-1 9
End of main thread

depends on jvm...we cnat predict thread scheduling algorithm...pratek veles diff op yeto..
bcoz pratek veles vegl jvm kaam krt 

flow and order

thread schedular tells main thread ..execudtion schedule for all thread
 */

