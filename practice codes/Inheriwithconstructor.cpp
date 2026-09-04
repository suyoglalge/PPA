#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called" << endl;
    }

    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called" << endl;
    }

    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;     // calls Animal() first, then Dog()
    d.eat();
    d.bark();
    return 0;
}