#include <iostream>
using namespace std;

class Demo
{
    public:
     int no1;
     int no2;

     Demo() // de didnt mention any type so in cpp it is treated as default
     {
        no1 = 10;
        no2 = 20;
     }
     
};
int main()
{
    Demo dobj;
    cout<<dobj.no1<<"\n";
    cout<<dobj.no2;


    return 0;
}