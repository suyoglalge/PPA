public class Threaddemo1
{
    public static void main(String[] args)
    {
        System.out.println("Inside main...");

        Thread t = Thread.currentThread();

        System.out.println("Current thread name is : "+t.getName());
        //already banlela thread cha naav cheak krtoy...its main thread

        System.out.println("Currrent thread TID is :"+t.getId());

        System.out.println("Thread is alive or not:"+t.isAlive());

        System.out.println("thread priority is:"+t.getPriority());//default priority
        
    }
}
/* //////////////////////////////////////////////////////////////////

here we are asking cmd about thread with help of inbuild method
Inside main...
Current thread name is : main
Currrent thread TID is :3
Thread is alive or not:true
thread priority is:5

*//////////////////////////////////////////////////////////////////