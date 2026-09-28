#include<iostream>
using namespace std;
#pragma pack(1)
class Base
{
    public:
      int i, j;

      int addition(int no1 , int no2)//readymate
      {
        return no1 + no2;   //concrete
      }

      virtual int substractioin (int no1 , int no2) = 0; 
} ;

#pragma pack(1)
class Derived : public Base
{
    public:
      int x;

      int substractioin (int no1 , int no2) //jababdari purn krty
      {
         return no1+no2;
      }
      int Multiplication (int no1 , int no2) 
      {
         return no1*no2;
      }

};
int main()
{
    Derived dobj;

    int Ret = 0;

    cout<<"Size of base class :"<<sizeof(Base)<<"\n"; //16 = 4+4+8(2int , 1 pointer)
    cout<<"Size of Derived class :"<<sizeof(Derived)<<"\n";

    Ret = dobj.addition(11,10);
    cout<<"Addition is :"<<Ret<<"\n";

    Ret = dobj.substractioin(11,10);
     cout<<"Substraction  is :"<<Ret<<"\n";

    Ret = dobj.Multiplication(11,10);
     cout<<"Multiplication is :"<<Ret<<"\n";


     return 0;
}