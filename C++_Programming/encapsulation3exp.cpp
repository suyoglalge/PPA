#include<iostream>
using namespace std;

class demo //by default private access specifier
{

    public:
    int i; //data
    char ch;
    float f; //data 

};

int main()
{

    demo dobj;

    dobj.i=11;
    dobj.ch='A';
    dobj.f=3.14;

   

    return 0;
}

