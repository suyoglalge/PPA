
class Animal {

    void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {

    @Override
    void sound() {
        System.out.println("Dog barks");
    }
}

class Cat extends Animal {

    @Override
    void sound() {
        System.out.println("Cat meows");
    }
}

public class MethodOverriding {
    public static void main(String[] args) {

        Animal animal;

        Dog d = new Dog();
        animal = d;
        animal.sound();

        Cat c = new Cat();
        animal = c;
        animal.sound();
    }
}