#include<iostream>
using namespace std;

class demo
{
  
    public:
    int no;
    float f;
    double d;

    private:

    int marks;

};
int main()
{

    demo dobj;
    dobj.no=10;

    dobj.marks=100; // This line will cause a compilation error because 'marks' is private.
   
    cout<<dobj.no<<"....\n";

    return 0;
}