#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    int marks;

public:
    Student(int r, int m)
    {
        rollNo = r;
        marks = m;
    }

    Student(const Student &s)
    {
        rollNo = s.rollNo;
        marks = s.marks;
    }

    void display()
    {
        cout << "Roll No = " << rollNo << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1(101, 85);
    Student s2 = s1;

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}