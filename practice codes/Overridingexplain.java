class Animal
{
    void Sound()
    {
        System.out.println("Animal Makes sound");
    }
}

class Dog extends Animal
{
    void Sound()
    {
        System.out.println("Dog Barks ");
    }
}
class Overridingexplain
{
    public static void main(String[] args) 
    {
        Animal a = new Dog();
        a.Sound();
        
    }
}
//Animal a = new dog() creaateds a aparent class reference pointing to a child class object .
// a.sound() calls the dog's version of sound