class Parent
{
    public int no1=10, no2=20;
     Parent ()
    {
        System.out.println("Inside Parent Constructor");
    }

     void Addition()
    {
     
        System.out.println("Inside add");

    }

    void Substraction()
    {
       System.out.println("Inside Substraction");
    }
}

class child extends Parent
{
    public int n1,n2;

    child()
    {
        System.out.println("Inside clid constructor");
    }

    child(int i , int j)
    {
        System.out.println("inside paremeterized child constructor");
    }
    void fun()
    {
        System.out.println("inside fun ");
    }
}
class SinglelevelX
{
    public static void main(String[] args) 
    {
        child cobj = new child();

        cobj.Addition();
        cobj.Substraction();
        cobj.fun();

        

    }
} 
    

