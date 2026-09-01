//parent class= object,constructor,destructor calling
#include <iostream>
using namespace std;
class Parents
{
    public:
      int home;
      int money;

      Parents()
      {
        home = 500;
        money = 0;
        cout<<"inside parents constructor"<<"\n";
      }

      Parents(int i , int j)
      {
        home=i;
        money=j;
        cout<<"inside parents parermetrized constructor"<<"\n";
      }

      ~Parents()
      {
        cout<<"inside parents Destructor"<<"\n";
      }

      int Salary()
      {
        int add;
        add = home + money;
      }

      int Expenses()
      {
        int sub;
        sub = home - money;
        return sub;
     }

};
class child : public Parents
{
    public:
      int bike;
      int collage;

      child()
      {
        bike = 1;
        collage = 1;
        cout<<"inside Child constructor"<<"\n";
      }

      child(int i , int j)
      {
        bike=i;
        collage = j;
        cout<<"inside Child parematerized constructor"<<"\n";
      }

      int Gym()
      {
        int gym;
        gym = money + home;
        return gym;
      }


};
int main()
{
    Parents pobj;


    return 0;
}