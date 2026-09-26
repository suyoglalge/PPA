
class Vehical
{
    void Sound()
    {
        System.out.println("A Vehical are mode of transport");
    }
}

class Car extends Vehical
{
    @Override 
    void Sound()
    {
        System.out.println("Suitable for Safe and Long route Journey ");
    }
}
class OverridingexplainX
{
    public static void main(String[] args) 
    {
       Vehical a = new Car();
        a.Sound();
        
    }
}
//Vehical a = new Car() creaateds a aparent class reference pointing to a child class object .
// a.sound() calls the Car's version of sound