class marvellous
{
    public int no1;
    public int no2;

    public void fun()//behaviour
    {
        System.out.println("inside fun");
    }
}
 class Encapsulation
{
    public static void main(String A[]) 
    {
        marvellous mobj = new marvellous();

        mobj.fun();
        System.out.println(mobj.no1);
        System.out.println(mobj.no2);
     
    }
    
}
//javac Encapsulation.java creates 2 files each file for each class
