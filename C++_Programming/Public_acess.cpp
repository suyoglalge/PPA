#include <iostream>
using namespace std;
class Marvellous
{
   public:    //this is public acess specifier..
    int no1=0;
    int no2=0;
};
int main()
{
    Marvellous Mobj;  //we created object of marvellous and as there is public specifier we can acess characterstics
    Mobj.no1=10;
    Mobj.no2=20;

    cout<<Mobj.no1<<"\n";
    cout<<Mobj.no2<<"\n";

    return 0;

}
