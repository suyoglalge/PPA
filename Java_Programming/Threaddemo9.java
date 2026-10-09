class Demo extends Thread //creating class thread
{
    public void run()
    {
        try{
            int i=0;
            for(i=1 ; i<10 ; i++)
            {
            System.out.println("Thread"+Thread.currentThread().getName()+" "+i);
            Thread.sleep(3000);
            }
           }
           catch(Exception eobj)
           {
           }
    }   
}public class Threaddemo9

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

ThreadSecond_thread 1      he print jhal tr zopl
ThreadThread-1 1           mg he print jhal..mg he zopl
ThreadThread-1 2
ThreadSecond_thread 2       same for all remaining
ThreadThread-1 3
ThreadSecond_thread 3
ThreadThread-1 4
ThreadSecond_thread 4
ThreadThread-1 5
ThreadSecond_thread 5
ThreadSecond_thread 6
ThreadThread-1 6
ThreadSecond_thread 7
ThreadThread-1 7
ThreadThread-1 8
ThreadSecond_thread 8
ThreadSecond_thread 9
ThreadThread-1 9
End of main thread

deamon thread :
*/