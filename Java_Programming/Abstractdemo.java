abstract class Base
{
    public int i, j;

      public int addition(int no1 , int no2)//readymate
      {
        return no1 + no2;   //concrete
      }

      public abstract int substractioin (int no1 , int no2); 
} 

class Derived extends  Base
{
    public int x;

      public int substractioin (int no1 , int no2) //jababdari purn krty
      {
         return no1+no2;
      }
      public int Multiplication (int no1 , int no2) 
      {
         return no1*no2;
      }

};
class Abstractdemo 
{
    public static void main(String[] args)
    {
    Derived dobj = new Derived();

    int Ret = 0;

    Ret = dobj.addition(11,10);
    System.out.println("Addition is : "+Ret);

    Ret = dobj.substractioin(11,10);
    System.out.println("Substraction  is : "+Ret);

    Ret = dobj.Multiplication(11,10);
    System.out.println("Multiplication is : "+Ret);
    }
}