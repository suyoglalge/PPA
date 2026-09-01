#include<iostream>
using namespace std;
class Base
{
    public:
      int i,j;

      Base()
      {
        cout<<"INside Base constructor"<<"\n";
      }

      ~Base()
      {
        cout<<"INside base destructor"<<"\n";
      }

      void fun()
      {
        cout<<"Inside Base fun"<<"\n";
      }

      void gun()
      {
        cout<<"Inside Base gun"<<"\n";
      }
};

class Derived : public Base
{
    public:
      int x,y;

      Derived()
      {
        cout<<"insdide derived constructor"<<"\n";
      }

      ~Derived()
      {
        cout<<"insdide derived destructor"<<"\n";
      }

      void sun()
      {
        cout<<"inside Derived sun"<<"\n";
      }

};

class DerivedX: public Derived
{
    public:
      int a;

      DerivedX()
       {
        cout<<"inside DerivedX constructor"<<"\n";
       }

       ~DerivedX()
       {
        cout<<"inside DerivedX Destructor"<<"\n";
       }

       void run()
       {
        cout<<"inside derivedX run method"<<"\n";
       }
};
int main()
{

    DerivedX dobj;
    

    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();

    return 0;
}

//output:INside Base constructor
//insdide derived constructor
//inside DerivedX constructor
//Inside Base fun
//Inside Base gun
//inside Derived sun
//inside derivedX run method
//inside DerivedX Destructor
//insdide derived destructor
//INside base destructor
