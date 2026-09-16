#include <iostream>
using namespace std;

class Employee
{
    int id;
    float salary;

public:
    Employee(int i, float s)
    {
        id = i;
        salary = s;
    }

    Employee(const Employee &e)
    {
        id = e.id;
        salary = e.salary;
    }

    void display()
    {
        cout << "ID = " << id << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    Employee e1(101, 25000);
    Employee e2(e1);

    cout << "Original Object:" << endl;
    e1.display();

    cout << "\nCopied Object:" << endl;
    e2.display();

    return 0;
}