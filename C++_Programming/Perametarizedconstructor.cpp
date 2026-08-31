#include<iostream>
using namespace std;
class PPA
{
    public:
    int no1;
    int no2;

    PPA()
    {
        no1=0;
        no2=0;
    }

    PPA(int i , int j)
     {
        no1 = i ;
        no2 = j ;
     }


};

int main()
{
    PPA pobj1;
    PPA pobj2(10,20);
    int result = 0;



    cout<<pobj1.no1<<"\n";
    cout<<pobj2.no1<<"\n";

    cout<<pobj1.no2<<"\n";
    cout<<pobj2.no2<<"\n";

    return 0;

}