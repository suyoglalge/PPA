//constructor calling Parent class

class Parent
{
    public int no1, no2;
     Parent ()
    {
        System.out.println("Inside Parent Constructor");
    }
}
class Singlelevel
{
    public static void main(String[] args) 
    {
        Parent pobj = new Parent();

    }
}