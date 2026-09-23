
// Parent class
class Animal {
    String name;

    void eat() {
        System.out.println(name + " is eating.");
    }
}

// Child class inherits Animal
class Dog extends Animal {

    void bark() {
        System.out.println(name + " is barking.");
    }
}
 public class InheriX{
    public static void main(String[] args) {
        Dog dog = new Dog();

        dog.name = "Buddy";

        // Inherited from Animal
        dog.eat();

        // Defined in Dog
        dog.bark();
    }
}