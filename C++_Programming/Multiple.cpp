#include<iostream>
using namespace std;
class BaseA
{
    public:
      int i , j;

      BaseA()
      {
        cout<<"Inside BaseA constructor"<<"\n";
      }

      ~BaseA()
      {
        cout<<"Inside BaseA Destructor"<<"\n";
      }
 
      void fun()
      {
        cout<<"inside BaseA fun"<<"\n";
      }
};

class BaseB
{
    public:
      int x , y;

      BaseB()
      {
        cout<<"Inside BaseB constructor"<<"\n";
      }

      ~BaseB()
      {
        cout<<"Inside BaseB Destructor"<<"\n";
      }
 
      void gun()
      {
        cout<<"inside BaseB gun"<<"\n";
      }
};

class Derived : public BaseA,BaseB
{
    public:
      int a;

      Derived()
      {
        cout<<"inside derived constructor"<<"\n";
      }
      ~Derived()
      {
        cout<<"inside derived destructor"<<"\n";
      }

      void sun()
      {
        cout<<"insidee derived sun"<<"\n";
      };
};

int main()
{

    cout<<sizeof(BaseA)<<"\n";
    cout<<sizeof(BaseB)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    return 0;
}