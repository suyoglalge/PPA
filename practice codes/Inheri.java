
class Animal {
    Animal() {
        System.out.println("Animal constructor called");
    }

    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    Dog() {
        System.out.println("Dog constructor called");
    }

    void bark() {
        System.out.println("Dog is barking");
    }
}

public class Inheri {
    public static void main(String[] args) {
        Dog d = new Dog();

        d.eat();
        d.bark();
    }
}