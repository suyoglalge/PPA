#include <iostream>
using namespace std;

class Rectangle {
    int l, w;
public:
    Rectangle(int a = 2, int b = 3) 
    {
        l = a;
        w = b;
    }
    int area() { return l * w; }
};

int main() {
    Rectangle r1;
    Rectangle r2(4);
    Rectangle r3(4, 5);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
}