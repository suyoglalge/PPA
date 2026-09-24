#include <iostream>
using namespace std;

class Addition
{
    int a, b, sum;

public:
    // Constructor
    Addition(int x, int y)
    {
        a = x;
        b = y;
        sum = a + b;
    }

    void display()
    {
        cout << "Addition = " << sum;
    }
};

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    Addition obj(x, y);

    obj.display();

    return 0;
}