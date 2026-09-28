#include<iostream>
using namespace std;

class Base
{
    public:
      int i, j;

      int addition(int no1 , int no2)//readymate
      {
        return no1 + no2;
      }

      virtual int substractioin (int no1 , int no2) = 0;   //jababdari
};

class Derived : public Base
{
    public:
      int x;

};
int main()
{
    Base bobj;
    
     return 0;
}